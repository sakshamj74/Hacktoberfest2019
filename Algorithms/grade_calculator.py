jack = { "name":"Jack Frost", 
		"assignment" : [80, 50, 40, 20], 
		"test" : [75, 75], 
		"lab" : [78.20, 77.20] 
	} 

james = { "name":"James Potter", 
		"assignment" : [82, 56, 44, 30], 
		"test" : [80, 80], 
		"lab" : [67.90, 78.72] 
		} 


dylan = { "name" : "Dylan Rhodes", 
		"assignment" : [77, 82, 23, 39], 
		"test" : [78, 77], 
		"lab" : [80, 80] 
		} 
		

jess = { "name" : "Jessica Stone", 
		"assignment" : [67, 55, 77, 21], 
		"test" : [40, 50], 
		"lab" : [69, 44.56] 
	} 

tom = { "name" : "Tom Hanks", 
		"assignment" : [29, 89, 60, 56], 
		"test" : [65, 56], 
		"lab" : [50, 40.6] 
	} 

def get_average(marks): 
	total_sum = sum(marks) 
	total_sum = float(total_sum) 
	return total_sum / len(marks) 

def calculate_total_average(students): 
	assignment = get_average(students["assignment"]) 
	test = get_average(students["test"]) 
	lab = get_average(students["lab"]) 

	
	return (0.1 * assignment +
			0.7 * test + 0.2 * lab) 

def assign_letter_grade(score): 
	if score >= 90: return "A"
	elif score >= 80: return "B"
	elif score >= 70: return "C"
	elif score >= 60: return "D"
	else : return "E"

def class_average_is(student_list): 
	result_list = [] 

	for student in student_list: 
		stud_avg = calculate_total_average(student) 
		result_list.append(stud_avg) 
		return get_average(result_list) 

students = [jack, james, dylan, jess, tom] 

 
for i in students : 
	print(i["name"]) 
	print("=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=") 
	print("Average marks of %s is : %s " %(i["name"], 
						calculate_total_average(i))) 
						
	print("Letter Grade of %s is : %s" %(i["name"], 
	assign_letter_grade(calculate_total_average(i)))) 
	
	print() 

class_av = class_average_is(students) 

print( "Class Average is %s" %(class_av)) 
print("Letter Grade of the class is %s "
		%(assign_letter_grade(class_av))) 
