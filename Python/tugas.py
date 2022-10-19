def hitungNilaiAkhir(tgs, uts, uas) :
    return (0.3*float(tgs)) + (0.3*float(uts)) + (0.3*float(uas))

def grading(nilai) :
    if (nilai>=85 and nilai <= 100) :
        return "A"
    elif (nilai>=80):
        return "A-"
    elif (nilai>=75):
        return "B+"
    elif (nilai>=70):
        return "B"
    elif (nilai>=65):
        return "B-"
    elif (nilai>=60):
        return "C"
    elif (nilai>=45):
        return "D"
    elif (nilai>=0):
        return "E"
    else:
        return "~"

mhs = {}
def inputMahasiswa(n):
    i = 1
    while i <= n :
        nim = input("NIM : ")
        nama = input ("Nama : ")
        tgs = input ("Nilai TUGAS: ")
        uts = input ("Nilai UTS: ")
        uas = input ("Nilai UAS: ")
        mhs[nim] = {"nim": nim, "nama": nama, "tgs": tgs, "uts": uts, "uas": uas}
        i = i+1

jum_mhs = int(input("Jumlah mahasiswa: "))
inputMahasiswa(jum_mhs)  

str_fmt = '{:<5} {:<10} {:<20} {:<8} {:<8} {:<8} {:<15} {:<8}'
print (str_fmt.format('#','NIM','NAMA','TUGAS','UTS','UAS','NILAI AKHIR','GRADE'))
no = 1
for idx,val in mhs.items():
    nilai_akhir = hitungNilaiAkhir(val["tgs"], val["uts"], val["uas"])
    grade = grading(nilai_akhir)
    mhs[idx]["nakhir"] = nilai_akhir
    mhs[idx]["grade"] = grade
    print(str_fmt.format(no, val["nim"], val["nama"], val["tgs"], val['uts'], val["uas"], nilai_akhir, grade ))
    no = no+1
