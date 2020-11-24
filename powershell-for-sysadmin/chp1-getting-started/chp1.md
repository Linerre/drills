### 01 Getting Started

#### Using DOS Commands
- `cd`, `dir`, `cls` all work in PS as they do in `cmd.exe`
  - indeed they are translated to native PS commands
  - not *all* DOS cmds work in PS
  - `Get-Alias` will list all PS cmds with their shorthands
	
#### Using DOS Commands
- execute `Get-Command` to see a list of every command PS is aware of by default
- PS follows *Verb-Noun* pattern for cmd names
- most of the built-in commands from Microsoft are *cmdlets*, typically written in C#
- *functions* are commands written in PowerShell
- many cmds in PS have *parameters*, values passed to a cmd
- to limit the result of `Get-Command`:
  - `Get-Command -Verb Get`
  - `Get-Command -Verb Get -Noun Content`
	  - `Get-Command -Name Get-Content`
	  
#### Getting Help
##### Displaying the Docs
- PowerShell has the `help` command and the `Get-Help` cmdlet
- `Get-Help <CommmandName> -Examples` to show real-world uses of a cmd
  - `Get-Help Add-Content -Examples`
##### Learning about Genral Topics
- `Get-Help about_Core_Commands` to see an overall explanation of PS core cmds
- `Get-Help -Name About*` using wildcard `*` to get all possible topics starting with *About*
##### Updating the Docs
- `Update-Help` <-- run this command as administrator (yep, manual on PS is updatable)
- occasionally receive an error when running `Update-Help` if the location where the help is stored is not available anymore
- don’t expect `Update-Help` to always show the latest help content for every command in PowerShell
