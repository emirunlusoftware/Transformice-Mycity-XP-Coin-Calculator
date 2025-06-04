#Import another .py files
import dialogs
import functions

#Import required modules
import readchar



functions.intro()

def main():
	while True:
		option = readchar.readchar().lower()

		# (1)Find My Total Xp
		if option == "1":
			functions.total_xp()

		# (2)Forward/Backward-looking Level Calculation
		elif option == "2":
			functions.fwbw_level()

		# (3)Difference Between Two Levels
		elif option == "3":
			functions.diff_levels()

		# (4)Start Coin Calculator
		elif option == "4":
			functions.coin_calculator()

		# (5)How Does the Coin Calculator Work?
		elif option == "5":
			functions.coin_howto()

		# (9)Update Log
		elif option == "9":
			functions.update_log()

		# (A)About
		elif option == "a":
			print("\n" + dialogs.About[functions.lang])
			functions.go_mainmenu()

		# (L)Change Language
		elif option == "l":
			functions.change_language()

		# (E)Exit
		elif option == "e":
			return





if __name__ == "__main__":
	main()