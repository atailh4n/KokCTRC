# <img src="https://avatars.githubusercontent.com/u/87649216?v=4" width="32" height="32" /> KokCTRC - CUDA to ROCm Compiler

<p align="center">
  <img src="https://img.shields.io/github/license/atailh4n/KokCTRC?style=flat-square" alt="GitHub License">
  <img src="https://img.shields.io/github/last-commit/atailh4n/KokCTRC?display_timestamp=author&style=flat-square" alt="GitHub last commit">
</p>

**KokCTRC** (Kokturk CUDA To ROCm Compiler) is a project designed to transform CUDA code into ROCm (and vice versa) while also linting it. 

This is my passion project, so I am deeply invested in it. It's written in C++, and as the project is still in its very early stages, progress is slow but deliberate.

---

## Structure

### Description of Important Files and Directories

- **LICENSE**: Contains the project's licensing information (GPLv3).  
- **README.md**: This file; explains the project's goals, usage, and setup instructions.  
- **src/**: Directory containing the source code. Includes:  
  - `main.cpp`: The main file where program execution begins.  
  - `map/CTR.cpp`: Defines the mapping logic between CUDA and ROCm functions.  
- **tests/**: Unit tests for validating the functionality of the project.  
- **build/**: Folder where compiled binaries and intermediate files are stored.  
- **docs/**: Optional directory for extended documentation.  
- **scripts/**: Automation and utility scripts, such as build scripts.  

---

Feel free to modify the structure to fit your project's actual layout. If you add more directories or files, make sure to keep this section updated.

I am also open to contributions, so feel free to open an issue or submit a pull request.

---

### Keep In Mind

This version includes only basic functionality, such as logging and basic table mappings. Advanced features like linting are not implemented yet, as the project is still in development. 

If you find this project interesting or useful, consider starring it or donating to support further development—it would mean a lot!

---

## License

This project is licensed under the terms of GPLv3 License - see the [LICENSE](./LICENSE.md) file for details.