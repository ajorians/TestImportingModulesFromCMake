# TestImportingModulesFromCMake
A test to see efforts to import C++ modules created with CMake.

## How I use this

Using Visual Studio I can open the CMake project and build it.

It creates a static lib (.lib) file which I will link with.  But it also creates an .ifc file:
![image](https://github.com/user-attachments/assets/8b534dec-089e-4117-b605-735bfdb42bff)

Now a normal C++ .vcxproj will use additional includes such that it includes the header file.  However with modules we'll specify additional Binary Module Interface directory and additional module dependency:
![image](https://github.com/user-attachments/assets/260fc7f1-9dd3-4fd7-bf80-e4c71d945905)

Still I need to specify the additional link directories and link dependencies to link with the .lib file.

But when all is said and done it builds and compiles.

## Additional Notes

I did get a warning when I first got this working:
![image](https://github.com/user-attachments/assets/1056b7af-a4f4-4dcc-b376-6a9d951e7668)

The gist of that is a fresh new .vcxproj has some settings and building a static lib with CMake has some settings.  And they don't perfectly match.  It still worked though.

But it was easy enough to get them to match.  the new .vcxproj has a check turned on:
![image](https://github.com/user-attachments/assets/7b5709c6-1dbc-4256-a8f1-a63de3a95b14)

And a floating point option set:
![image](https://github.com/user-attachments/assets/059ae33f-c380-4f88-875c-45f652ea6cd6)

I made it so the CMake target built with these same values and that made the warnings go away.

Hope that helps! :)
