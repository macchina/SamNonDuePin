# SamNonDuePin

This library allows access to the pins on the SAM3X8E that are not defined in the Arduino
pin description.

This released version was coordinated by [Macchina](https://www.macchina.cc/) for their M2 project and the included example was written for that board.  While the [custom Macchina M2 board configuration](https://github.com/macchina/arduino-boards-sam) is now preferred for the Macchina M2 (instead of this library), this library is still generally useful for other SAM-based boards.

## Contributing
Please open issues and create pull requests.

### Branches

This repository contains a unified history of the major forks of this library:

  * **master** - this branch containing the active release.  It is only slightly modified from jmgiacalone.
  * [reprap](https://github.com/macchina/SamNonDuePin/tree/reprap) - history from [RepRapFirmware](https://github.com/dc42/RepRapFirmware) where the library was originally released and most developed.  (The latest commit is empty because RepRapFirmware removed the library, but the history in this branch is useful if you want to get the later versions).
    * The following command against that repository will recreate the history here: `git filter-branch --prune-empty --subdirectory-filter Libraries/SamNonDuePin`
  * [jmgiacalone](https://github.com/macchina/SamNonDuePin/tree/jmgiacalone) - Despite being an older version, [jmgiacalone/Arduino-libraries](https://github.com/jmgiacalone/Arduino-libraries) has been the most discoverable source for this library.
    * The libraries were briefly removed from the RepRapFirmware to their own repository.  [jmgiacalone/Arduino-libraries](https://github.com/jmgiacalone/Arduino-libraries) appears to be a remnant of that time.
    * The following command against that repository will recreate the history here: `git filter-branch --prune-empty --subdirectory-filter SamNonDuePin`
  * [unified](https://github.com/macchina-dev/SamNonDuePin/tree/unified) - Creates a unified history of the above forks.  (The latest commit is empty because RepRapFirmware removed the library, but the merges and history in this branch are useful).

## License

This library is free software; you can redistribute it and/or modify it under the terms of the GNU Lesser General Public License as published by the Free Software Foundation; either version 2.1 of the License, or (at your option) any later version.
