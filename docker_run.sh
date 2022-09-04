#!/bin/bash
docker run -v /home/joel/src/vial-qmk:/qmk_firmware qmkfm/qmk_cli $@
