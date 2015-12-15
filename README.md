# KubOS

A full-function real-time operating system targeting microcontrollers in space

## FEATURES

Based on the RIOT operating system, KubOS adds features required in a satellite environment.
* **MPU/CPU power management** If Power Management is enabled, KubOS automatically seeks the lowest power usage appropriate for what is happening at any given moment. Can manage MPU core voltage, CPU clock frequency, MPU sleep mode, individual peripheral power on/off, and individual peripheral frequency where supported by MPU hardware.
* **Peripheral Configuration Management** – Manages configuration of the peripherals found on a microcontroller. Prevents resource conflicts and illegal modes. Allows configuration and reconfiguration at run-time.
* **Run-time Software Update** Reconfigure or reload software while the satellite is in operation**.
* **SEU Support** Software support to detect and correct a single event upset on MPUs without dedicated SEU hardware.
* **Peripheral Bridging** Supports “no CPU” connection of peripherals where supported by MPU hardware.

## GETTING STARTED

* You want to start the KubOS? Just follow our [Getting started documentation](https://github.com/openkosmosorg/KubOS/wiki/Getting-started)
* The KubOS API itself can be built from the code using doxygen.

## CONTRIBUTE

To contribute something to KubOS, please refer to the [development procedures](https://github.com/openkosmosorg/KubOS/wiki/Development-procedures) and read all notes for best practice.

## LICENSE

* All sources and binaries that have been developed at Kubos Corporation are licensed 
  under the Apache License, Version 2.0. You may obtain a copy of the license at
          http://www.apache.org/licenses/LICENSE-2.0
* All sources and binaries that have been developed at Freie Universität Berlin are
  licensed under the GNU Lesser General Public License version 2.1 as published by the
  Free Software Foundation.
* Some external sources, especially files developed by SICS are published under
  a separate license.

All code files contain licensing information.

For more information, see the KubOS website:

http://www.kubos.co
====================================================================================================
# KubOS
A full-function real-time operating system targeting microcontrollers in space, particularly micro and nano satellites.
