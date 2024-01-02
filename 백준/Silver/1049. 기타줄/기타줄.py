broken_string, brand_num = map(int, input().split())
result = 0
package_list, single_list = [], []

for _ in range(brand_num) :
    package, single = map(int, input().split())
    package_list.append(package)
    single_list.append(single)
    
package_min, single_min = min(package_list), min(single_list)
package_num, single_num = broken_string // 6, broken_string % 6

result1 = package_min * package_num + single_min * single_num
result2 = package_min * (package_num + 1)
result3 = single_min * broken_string
result = min(result1, result2, result3)
print(result)