# Contributing to Aly
==================

Thank you for your interest in contributing to Aly! We welcome contributions of all kinds, whether it's fixing bugs, adding new features, or improving documentation. Please take a moment to read through our contributing guidelines to help ensure a smooth process.

## How You Can Contribute
----------------------

There are several ways to get involved:

## 1. Reporting Issues
   If you find a bug or encounter unexpected behavior in Aly, please report it by opening an issue. Be as detailed as possible when describing the problem, and provide any relevant information, such as:
   - Steps to reproduce
   - Expected behavior vs. actual behavior
   - Any error messages or logs

## 2. Feature Requests
   If you have an idea for a new feature or improvement, please open an issue to discuss it. We love hearing new ideas that can improve the language and its ecosystem.

## 3. Code Contributions
   If you’d like to contribute code, please follow these steps:

   ### Fork the Repository
   1. Fork the Aly repository to your GitHub account.
   2. Clone the forked repository to your local machine.

   ### Make Changes
   1. Create a new branch for your changes:
      ```bash
      git checkout -b your-feature-branch
      ```
   2. Make your changes, ensuring that your code adheres to the project’s coding style and conventions. If you're adding a feature or fixing a bug, try to include tests where applicable.

   ### Test Your Changes
   1. Build the project using CMake and your preferred C compiler (GCC is recommended):
      ```bash
      cmake .
      make
      ```
   2. Ensure all tests pass (if applicable) and that the code works as expected.

   ### Commit and Push
   1. Commit your changes with a clear and descriptive message:
      ```bash
      git commit -m "Brief description of the change"
      ```
   2. Push your changes to your fork:
      ```bash
      git push origin your-feature-branch
      ```

   ### Create a Pull Request
   1. Go to the original Aly repository and create a pull request.
   2. In your pull request description, explain why you made these changes and any additional context that might be helpful for reviewers.

# Code of Conduct
---------------
By contributing to Aly, you agree to abide by our [Code of Conduct](CODE_OF_CONDUCT.md). We expect all contributors to maintain a respectful and collaborative environment.

# License
-------
By contributing to Aly, you agree that your contributions will be licensed under the MIT License.
