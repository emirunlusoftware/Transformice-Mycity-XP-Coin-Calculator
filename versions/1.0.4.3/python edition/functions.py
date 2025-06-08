#Import another .py files
import dialogs

#Import required modules
import readchar



lang = "en"


def intro():
	print(f'''

{dialogs.MainMenu[lang]["Title"]}

{dialogs.MainMenu[lang]["FindXp"]}
{dialogs.MainMenu[lang]["FwBwLevel"]}
{dialogs.MainMenu[lang]["DiffLevel"]}

{dialogs.MainMenu[lang]["Coin"]}
{dialogs.MainMenu[lang]["CoinHowTo"]}

{dialogs.MainMenu[lang]["UpdateLog"]}
{dialogs.MainMenu[lang]["About"]}
{dialogs.MainMenu[lang]["Language"]}
{dialogs.MainMenu[lang]["Exit"]}''')



def total_xp():
	seviye = xp = 0
	while True:
		print(f'''
	
{dialogs.CalculateXp[lang]["Title1"]}
''')

		while True:
			userinput = input(dialogs.CalculateXp[lang]["EnterLevel"])

			if len(userinput) > 5 or not userinput.isdigit() or not 1 <= int(userinput) <= 10000:
				print('\n' + dialogs.CalculateXp[lang]["LevelError"])
				continue

			seviye = int(userinput)
			break

		while True:
			userinput = input(f'{dialogs.CalculateXp[lang]["EnterXp"]}{(seviye * 2000) + 500}): ')

			if len(userinput) > 5 or not userinput.isdigit() or not 0 <= int(userinput) <= (seviye * 2000) + 500:
				print('\n' + f'{dialogs.CalculateXp[lang]["XpError"]}{(seviye * 2000) + 500}!')
				continue

			xp = int(userinput)
			break

		xp_calculator(seviye, 0, xp, 0, "1")

		if calc_retry_or_main() == "m":
			intro()
			return



def fwbw_level():
	seviye = xp = 0
	while True:
		print(f'''
	
{dialogs.CalculateXp[lang]["Title2"]}
''')

		while True:
			userinput = input(dialogs.CalculateXp[lang]["EnterLevel"])

			if len(userinput) > 5 or not userinput.isdigit() or not 1 <= int(userinput) <= 10000:
				print('\n' + dialogs.CalculateXp[lang]["LevelError"])
				continue

			seviye = int(userinput)
			break

		while True:
			userinput = input(f'{dialogs.CalculateXp[lang]["EnterXp"]}{(seviye * 2000) + 500}): ')

			if len(userinput) > 5 or not userinput.isdigit() or not 0 <= int(userinput) <= (seviye * 2000) + 500:
				print('\n' + f'{dialogs.CalculateXp[lang]["XpError"]}{(seviye * 2000) + 500}!')
				continue

			xp = int(userinput)
			break

		while True:
			try:
				xp2 = int(input(dialogs.CalculateXp[lang]["FutureXp"]))

				if not -100000000000 <= xp2 <= 100000000000:
					print('\n' + dialogs.CalculateXp[lang]["FutureError"])
					continue

				break

			except ValueError:
				print('\n' + dialogs.CalculateXp[lang]["FutureError"])


		xp_calculator(seviye, 0, xp, xp2, "2")

		if calc_retry_or_main() == "m":
			intro()
			return



def diff_levels():
	seviye = xp = seviye2 = xp2 = 0
	while True:
		print(f'''
	
{dialogs.CalculateXp[lang]["Title3"]}
''')

		while True:
			userinput = input(dialogs.CalculateXp[lang]["EnterLevel1"])

			if len(userinput) > 5 or not userinput.isdigit() or not 1 <= int(userinput) <= 10000:
				print('\n' + dialogs.CalculateXp[lang]["LevelError"])
				continue

			seviye = int(userinput)
			break

		while True:
			userinput = input(f'{dialogs.CalculateXp[lang]["EnterXp1"]}{(seviye * 2000) + 500}): ')

			if len(userinput) > 5 or not userinput.isdigit() or not 0 <= int(userinput) <= ((seviye * 2000) + 500):
				print('\n' + f'{dialogs.CalculateXp[lang]["XpError"]}{(seviye * 2000) + 500}!')
				continue

			xp = int(userinput)
			break

		while True:
			userinput = input(dialogs.CalculateXp[lang]["EnterLevel2"])

			if len(userinput) > 5 or not userinput.isdigit() or not 1 <= int(userinput) <= 10000:
				print('\n' + dialogs.CalculateXp[lang]["LevelError"])
				continue

			seviye2 = int(userinput)
			break

		while True:
			userinput = input(f'{dialogs.CalculateXp[lang]["EnterXp2"]}{(seviye * 2000) + 500}): ')

			if len(userinput) > 5 or not userinput.isdigit() or not 0 <= int(userinput) <= ((seviye * 2000) + 500):
				print('\n' + f'{dialogs.CalculateXp[lang]["XpError"]}{(seviye * 2000) + 500}!')
				continue

			xp2 = int(userinput)
			break

		xp_calculator(seviye, seviye2, xp, xp2, "3")

		if calc_retry_or_main() == "m":
			intro()
			return


def coin_calculator():
	while True:
		print("\n\n" + dialogs.CalculateCoin[lang]["Title"])
		coin_min = coin_avg = coin_max = 0

		while True:
			userinput = input('\n' + dialogs.CalculateCoin[lang]["TitleCop"] + '\n' + dialogs.CalculateCoin[lang]["EnterCop"])

			if len(userinput) > 6 or not userinput.isdigit() or not 0 <= int(userinput) <= 999999:
				print("\n\n" + dialogs.CalculateCoin[lang]["JobStatError"])
				continue

			coin_min = coin_avg = coin_max = int(userinput) * 150
			break

		while True:
			userinput = input('\n' + dialogs.CalculateCoin[lang]["TitleThief"] + '\n' + dialogs.CalculateCoin[lang]["EnterThief"])

			if len(userinput) > 6 or not userinput.isdigit() or not 0 <= int(userinput) <= 999999:
				print("\n\n" + dialogs.CalculateCoin[lang]["JobStatError"])
				continue

			coin_min += int(userinput) * 250
			coin_avg += int(userinput) * 463
			coin_max += int(userinput) * 1100
			break

		while True:
			userinput = input('\n' + dialogs.CalculateCoin[lang]["TitleFisher"] + '\n' + dialogs.CalculateCoin[lang]["EnterFisher"])

			if len(userinput) > 6 or not userinput.isdigit() or not 0 <= int(userinput) <= 999999:
				print("\n\n" + dialogs.CalculateCoin[lang]["JobStatError"])
				continue

			# If the player fished less than 150 fishes [We consider that the player hasn't fished a goldenmare yet.]
			if int(userinput) < 150:
				coin_min += int(userinput) * 120
				coin_avg += int(userinput) * 150
				coin_max += int(userinput) * 254
			else:
				coin_min += int(userinput) * 169
				coin_avg += int(userinput) * 211
				coin_max += int(userinput) * 254
			break

		while True:
			userinput = input('\n' + dialogs.CalculateCoin[lang]["TitleMiner"] + '\n' + dialogs.CalculateCoin[lang]["EnterGold"])

			if len(userinput) > 6 or not userinput.isdigit() or not 0 <= int(userinput) <= 999999:
				print("\n\n" + dialogs.CalculateCoin[lang]["JobStatError"])
				continue

			coin_min += int(userinput) * 115
			coin_avg += int(userinput) * 115
			coin_max += int(userinput) * 115
			break

		print('\n' + dialogs.CalculateCoin[lang]["TitleCrystals"])
		while True:
			userinput = input(dialogs.CalculateCoin[lang]["EnterYellow"])

			if len(userinput) > 6 or not userinput.isdigit() or not 0 <= int(userinput) <= 999999:
				print("\n\n" + dialogs.CalculateCoin[lang]["JobStatError"])
				continue

			coin_min += int(userinput) * 200
			coin_avg += int(userinput) * 200
			coin_max += int(userinput) * 200
			break

		while True:
			userinput = input(dialogs.CalculateCoin[lang]["EnterBlue"])

			if len(userinput) > 6 or not userinput.isdigit() or not 0 <= int(userinput) <= 999999:
				print("\n\n" + dialogs.CalculateCoin[lang]["JobStatError"])
				continue

			coin_min += int(userinput) * 342
			coin_avg += int(userinput) * 342
			coin_max += int(userinput) * 342
			break

		while True:
			userinput = input(dialogs.CalculateCoin[lang]["EnterPurple"])

			if len(userinput) > 6 or not userinput.isdigit() or not 0 <= int(userinput) <= 999999:
				print("\n\n" + dialogs.CalculateCoin[lang]["JobStatError"])
				continue

			coin_min += int(userinput) * 600
			coin_avg += int(userinput) * 600
			coin_max += int(userinput) * 600
			break

		while True:
			userinput = input(dialogs.CalculateCoin[lang]["EnterGreen"])

			if len(userinput) > 6 or not userinput.isdigit() or not 0 <= int(userinput) <= 999999:
				print("\n\n" + dialogs.CalculateCoin[lang]["JobStatError"])
				continue

			coin_min += int(userinput) * 800
			coin_avg += int(userinput) * 800
			coin_max += int(userinput) * 800
			break

		while True:
			userinput = input(dialogs.CalculateCoin[lang]["EnterRed"])

			if len(userinput) > 6 or not userinput.isdigit() or not 0 <= int(userinput) <= 999999:
				print("\n\n" + dialogs.CalculateCoin[lang]["JobStatError"])
				continue

			coin_min += int(userinput) * 1200
			coin_avg += int(userinput) * 1200
			coin_max += int(userinput) * 1200
			break

		while True:
			userinput = input('\n' + dialogs.CalculateCoin[lang]["TitleFarmer"] + '\n' + dialogs.CalculateCoin[lang]["EnterSales"])

			if len(userinput) > 6 or not userinput.isdigit() or not 0 <= int(userinput) <= 999999:
				print("\n\n" + dialogs.CalculateCoin[lang]["JobStatError"])
				continue

			coin_min += int(userinput) * 10
			coin_avg += int(userinput) * 53
			coin_max += int(userinput) * 1300
			break

		while True:
			userinput = input(dialogs.CalculateCoin[lang]["EnterFruits"])

			if len(userinput) > 6 or not userinput.isdigit() or not 0 <= int(userinput) <= 999999:
				print("\n\n" + dialogs.CalculateCoin[lang]["JobStatError"])
				continue

			coin_min += int(userinput)
			coin_avg += int(userinput) * 15
			coin_max += int(userinput) * 200
			break

		while True:
			userinput = input('\n' + dialogs.CalculateCoin[lang]["TitleChef"] + '\n' + dialogs.CalculateCoin[lang]["EnterChef"])

			if len(userinput) > 6 or not userinput.isdigit() or not 0 <= int(userinput) <= 999999:
				print("\n\n" + dialogs.CalculateCoin[lang]["JobStatError"])
				continue

			coin_min += int(userinput) * 400
			coin_avg += int(userinput) * 700
			coin_max += int(userinput) * 729
			break

		print("\n\n" + dialogs.CalculateCoin[lang]["TitleResult"])
		print(dialogs.CalculateCoin[lang]["Minimum"] + f'{coin_min}' + "$")
		print(dialogs.CalculateCoin[lang]["Average"] + f'{coin_avg}' + "$")
		print(dialogs.CalculateCoin[lang]["Maximum"] + f'{coin_max}' + "$")
		print()

		if calc_retry_or_main() == "m":
			intro()
			return



def coin_howto():
	print(
	"\n\n" + dialogs.CoinHowTo[lang][0] +
	"\n\n" + dialogs.CoinHowTo[lang][1] +
	"\n" + dialogs.CoinHowTo[lang][2] +
	"\n\n" + dialogs.CoinHowTo[lang][3] +
	"\n" + dialogs.CoinHowTo[lang][4] +
	"\n" + dialogs.CoinHowTo[lang][5] +
	"\n\n" + dialogs.Misc[lang])

	while (_ := readchar.readchar()) != readchar.key.ENTER:
		pass

	print(
	"\n" + dialogs.CoinHowTo[lang][6] +
	"\n\n" + dialogs.CoinHowTo[lang][7] +
	"\n" + dialogs.CoinHowTo[lang][8] +
	"\n" + dialogs.CoinHowTo[lang][9] +
	"\n" + dialogs.CoinHowTo[lang][10] +
	"\n" + dialogs.CoinHowTo[lang][11] +
	"\n\n" + dialogs.CoinHowTo[lang][12] +
	"\n" + dialogs.CoinHowTo[lang][13] +
	"\n" + dialogs.CoinHowTo[lang][14] +
	"\n" + dialogs.CoinHowTo[lang][15] +
	"\n" + dialogs.CoinHowTo[lang][16] +
	"\n\n" + dialogs.CoinHowTo[lang][17] +
	"\n" + dialogs.CoinHowTo[lang][18] +
	"\n" + dialogs.CoinHowTo[lang][19] +
	"\n" + dialogs.CoinHowTo[lang][20] +
	"\n" + dialogs.CoinHowTo[lang][21] +
	"\n\n" + dialogs.Misc[lang])

	while (_ := readchar.readchar()) != readchar.key.ENTER:
		pass

	print(
	"\n" + dialogs.CoinHowTo[lang][22] +
	"\n\n" + dialogs.CoinHowTo[lang][23] +
	"\n" + dialogs.CoinHowTo[lang][24] +
	"\n" + dialogs.CoinHowTo[lang][25] +
	"\n" + dialogs.CoinHowTo[lang][26] +
	"\n" + dialogs.CoinHowTo[lang][27] +
	"\n" + dialogs.CoinHowTo[lang][28] +
	"\n" + dialogs.CoinHowTo[lang][29] +
	"\n" + dialogs.CoinHowTo[lang][30] +
	"\n")

	go_mainmenu()



def update_log():
	while True:
		print("\n"
			  + dialogs.UpdateLog[lang] + "\n"
			  + dialogs.v1043["Version"] + "\n"
			  + dialogs.v1042["Version"] + "\n"
			  + dialogs.v1041["Version"] + "\n"
			  + dialogs.v104["Version"] + "\n"
			  + dialogs.v103["Version"] + "\n"
			  + dialogs.v1022["Version"] + "\n"
			  + dialogs.v1021["Version"] + "\n"
			  + dialogs.v102["Version"] + "\n"
			  + dialogs.v101["Version"] + "\n")
		print(dialogs.MainMenu[lang]["MainMenu"])

		while option := input().lower():
			if option == "101":
				print("\n" + dialogs.v101[lang]["Changes"])
				if goback_updatelog_or_mainmenu() == "m":
					intro()
					return
				break

			elif option == "102":
				print("\n" + dialogs.v102[lang]["Changes"])
				if goback_updatelog_or_mainmenu() == "m":
					intro()
					return
				break

			elif option == "1021":
				print("\n" + dialogs.v1021[lang]["Changes"])
				if goback_updatelog_or_mainmenu() == "m":
					intro()
					return
				break

			elif option == "1022":
				print("\n" + dialogs.v1022[lang]["Changes"])
				if goback_updatelog_or_mainmenu() == "m":
					intro()
					return
				break

			elif option == "103":
				print("\n" + dialogs.v103[lang]["Changes"])
				if goback_updatelog_or_mainmenu() == "m":
					intro()
					return
				break

			elif option == "104":
				print("\n" + dialogs.v104[lang]["Changes"])
				if goback_updatelog_or_mainmenu() == "m":
					intro()
					return
				break

			elif option == "1041":
				print("\n" + dialogs.v1041[lang]["Changes"])
				if goback_updatelog_or_mainmenu() == "m":
					intro()
					return
				break

			elif option == "1042":
				print("\n" + dialogs.v1042[lang]["Changes"])
				if goback_updatelog_or_mainmenu() == "m":
					intro()
					return
				break

			elif option == "1043":
				print("\n" + dialogs.v1043[lang]["Changes"])
				if goback_updatelog_or_mainmenu() == "m":
					intro()
					return
				break

			elif option == "m":
				intro()
				return



def calc_retry_or_main():
	print(dialogs.MainMenu[lang]["Retry"])
	print(dialogs.MainMenu[lang]["MainMenu"])

	while True:
		if (option := readchar.readchar().lower()) in ("r","m"):
			return option.lower()



def goback_updatelog_or_mainmenu():
	print(dialogs.MainMenu[lang]["BackUpdateLog"])
	print(dialogs.MainMenu[lang]["MainMenu"])
	while True:
		if (option := readchar.readchar().lower()) in ("9", "m"):
			return option.lower()



def go_mainmenu():
	print(dialogs.MainMenu[lang]["MainMenu"])
	while (_ := readchar.readchar().lower()) != "m":
		pass
	intro()



def xp_calculator(seviye, seviye2, xp, xp2, method):
	toplam = (((seviye - 1) * seviye // 2) * 2000 + (seviye - 1) * 500) + xp

	if method == "1": #Find My Total XP
		print(f'\n{dialogs.CalculateXp[lang]["XpResult"]}{toplam}', end="\n\n")

	elif method == "2": #Forward-Backward Calculation
		k = 1
		toplam2 = toplam + xp2
		while True:
			islem = (k * 2000) + 500
			if toplam2 < islem:
				break
			toplam2 -= islem
			k += 1

		print("\n" + dialogs.CalculateXp[lang]["LevelResult"] + f'{k}' + " (" + f'{toplam2}' + "/" + f'{islem}' + ")" + "\n")

	elif method == "3": #Difference Between Two Levels
		toplam2 = (((seviye2 - 1) * seviye2 // 2) * 2000 + (seviye2 - 1) * 500) + xp2

		fark = abs(toplam2 - toplam)
		print("\n" + dialogs.CalculateXp[lang]["DifferenceResult"] + f'{fark}' + " xp" + "\n")



def change_language():
	global lang
	print("\n" + dialogs.Language[lang])
	print(dialogs.MainMenu[lang]["MainMenu"])
	while option := readchar.readchar().lower():
		if option == "1":
			lang = "en"
			intro()
			break

		elif option == "2":
			lang = "tr"
			intro()
			break

		elif option == "m":
			intro()
			break