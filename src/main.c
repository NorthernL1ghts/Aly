#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

long get_file_size(FILE* file) {
	if (!file) { return 0; }
	fpos_t original = 0;
	if (fgetpos(file, &original) != 0) {
		printf("fgetpos() failed: %i\n", errno);
		return 0;
	}
	fseek(file, 0, SEEK_END);
	long out = ftell(file);
	if (fsetpos(file, &original) != 0) {
		printf("fsetpos() failed: %i\n", errno);
	}
	return out;
}

char* get_file_contents(char* path) {
	FILE* file = fopen(path, "r");
	if (!file) {
		printf("Could not open file at %s\n", path);
		return NULL;
	}
	fseek(file, 0, SEEK_SET);
	long size = get_file_size(file);
	char* contents = malloc(size + 1);
	char* write_it = contents;
	size_t bytes_read = 0;
	while (bytes_read < size) {
		size_t bytes_read_this_iteration = fread(write_it, 1, size - bytes_read, file);
		if (ferror(file)) {
			printf("Error while reading: %i\n", errno);
			free(contents);
			return NULL;
		}

		bytes_read += bytes_read_this_iteration;
		write_it += bytes_read_this_iteration;

		if (feof(file)) { break; }
	}
	contents[bytes_read] = '\0'; // Ensures that we have a string that equals 'contents'.
	return contents;
}

void print_usage(char** argv) {
	printf("USAGE: %s <path_to_file_to_compile>\n", argv[0]);
}

// 56:27

int main(int argc, char** argv) {
	if (argc < 2) {
		print_usage(argv);
		exit(0);
	}

	char* path = argv[1];
	char* contents = get_file_contents(path);
	if (contents) {
		printf("Contents of %s:\n---\n\"%s\"\n---\n", path, contents);
		free(contents);
	}

	return 0;
}