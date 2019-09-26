#!/bin/bash
#SBATCH --nodes=6
#SBATCH --time=04:00:00
#SBATCH --job-name=galaxsim
#SBATCH --output=/home/mdutcher/outputfiles/galaxsim.out
#SBATCH --mail-type=FAIL

pwd
echo "SLURM_JOB_ID=$SLURM_JOB_ID"
date

source ~/scripts/modules

~/enzo/src/enzo/enzo.exe ~/paramfiles/GalaxyDiskPatch.enzo

#~/enzo/run/Hydro/Hydro-3D/CollapseTestNonCosmological/CollapseTestNonCosmological.enzo
#~/paramfiles/GalaxyDiskPatch.enzo
