#include <iostream>
using namespace std;

struct User {
	string Nama;
	string NIM;
	string FYP;
	User *next;
};
User *head=NULL, *tail=NULL;

string Personality();
void insertDepan(string datanama, string datanim,string datafyp),tampil(),Search(string n),hapusDepan(),clear();

string soal[][3]= 
{
	{
		"1. Ketika bertemu dengan orang baru kamu biasanya...",
		"2. Pekerjaan yang mengharuskan diri kamu menghadapi banyak orang baru membuat kamu...",
		"3. Ketika harus berbicara di depan publik, kamu biasanya...",
	},
	{
		"4. Ketika melakukan sesuatu biasanya kamu...",
		"5. Kamu lebih tertarik pada...",
		"6. Kamu yakin bahwa bungee jumping aman dilakukan dari...",
	},
	{
		"7. Apa yang paling memengaruhimu?",
		"8. Mana yang menurutmu lebih mudah kamu korbankan?",
		"9. Pujian mana yang akan lebih membuatmu merasa terapresiasi?",
	},
	{
		"10. Jika ada tugas, kamu biasanya lebih memilih...",
		"11. Jika kamu belanja ke swalayan, kamu memilih untuk..",
		"12. Ketika memutuskan sesuatu kamu biasanya...",
	}
};

string opsi[][3][2]= 
{
	{	{"A. Menunggu orang membuka topik pembicaraan","B. Memulai membuka topik pembicaraan"},
		{"A. Merasa tertekan","B. Lebih semangat bekerja"},
		{"A. Melatih apa yang ingin dibicarakan beberapa kali sebelum acara berlangsung","B. Spontan dengan apa yang ingin dibicarakan"}
	},
	{	{"A. Melakukannya dengan cara yang orang lain lakukan pada umumnya","B. Melakukannya dengan caramu sendiri"},
		{"A. Apa yang sedang terjadi saat ini","B. Apa yang terjadi di masa depan"},
		{"A. Teman-temanmu, berdasarkan pengalaman mereka mengatakan aman","B. Firasatmu berkata hal tersebut aman"}
	},
	{	{"A. Isi kepalamu","B. Isi hatimu"},
		{"A. Keputusan tepat berdasarkan nalar","B. Hubungan baik dengan orang lain"},
		{"A. Kamu orang yang sangat logis, ya","B. Kamu sangat perhatian, deh"}
	},
	{	{"A. Nyicil dari jauh-jauh hari","B. Mengerjakan ketika sudah mendekati deadline"},
		{"A. Mencatat daftar barang yang perlu dibeli agar tidak membeli barang yang tidak diperlukan","B. Membeli barang sesuai dengan apa yang diingat dan terbuka pada kemungkinan pilihan untuk membeli barang lain"},
		{"A. Memutuskannya dengan sangat hati-hati","B. Memutuskannya secara spontan"}
	}
};

int main() {
	int pil;
	string datanama,datanim,datafyp,cari;
	do {
		cout<<endl;
		cout<<" ============================"<<endl;
		cout<<" =       PROGRAM MBTI       ="<<endl;
		cout<<" =        KELOMPOK 19       ="<<endl;
		cout<<" ============================"<<endl;
		cout<<" = 1. Insert                ="<<endl;
		cout<<" = 2. Delete                ="<<endl;
		cout<<" = 3. Display               ="<<endl;
		cout<<" = 4. Clear                 ="<<endl;
		cout<<" = 5. Selection             ="<<endl;
		cout<<" = 6. Exit                  ="<<endl;
		cout<<" ============================"<<endl;
		cout<<" Masukan Pilihan : ";
		cin>>pil;
		switch (pil) {
			case 1:
				system("cls");
				{
					cout<<"Masukan Nama = ";
					getline(cin>>ws,datanama);
					cout<<"Masukan NIM = ";
					cin>>datanim;
					system("cls");
					datafyp=Personality();
					insertDepan(datanama,datanim,datafyp);
					system("pause");
					system("cls");
					break;
				}
			case 2:
				system("cls");
				{
					hapusDepan();
					system("pause");
					system("cls");
					break;
				}
			case 3:
				system("cls");
				{
					tampil();
					system("pause");
					system("cls");
					break;
				}
			case 4:
				system("cls");
				{
					clear();
					system("pause");
					system("cls");
					break;
				}
			case 5:
				system("cls");
				{
					cout<<"Masukan Tipe Seleksi = ";
					cin>>cari;
					Search(cari);
					system("pause");
					system("cls");
					break;
				}
			case 6:
				system("cls");
				{
					return 0;
					break;
				}
			default :
				system("cls");
				{
					cout<<"\n Maaf, Pilihan yang anda pilih tidak tersedia!";
				}
		}

	} while (pil<=7);
	return 0;
}

//yuan
void insertDepan(string datanama, string datanim,string datafyp) {
	User *baru;
	baru = new User;
	baru->Nama = datanama;
	baru->NIM=datanim;
	baru->FYP=datafyp;
	if(tail==NULL) {
		head=tail=baru;
		tail->next=NULL;
	} else {
		baru->next = head;
		head=baru;
	}
}

void tampil() {
	User *bantu;
	bantu=head;
	if(tail!=NULL) {
		while(bantu!=NULL) {
			cout<<endl;
			cout<<" ============================="<<endl;
			cout<<" =         DATA USER         ="<<endl;
			cout<<" ============================="<<endl;
			cout<<" = Nama : "<<bantu->Nama<<endl;
			cout<<" = NIM  : "<<bantu->NIM<<endl;
			cout<<" = MBTI : "<<bantu->FYP<<endl;
			cout<<" ============================="<<endl;
			bantu=bantu->next;
		}
	} else {
		cout <<"Masih kosong\n";
	}
}

//januar
void Search(string n) {
	User *cari;
	cari=head;
	if(tail!=NULL) {
		while(cari!=NULL) {
			int check=cari->FYP.find(n);
			if(check!=-1) {
				cout<<endl;
				cout<<" ============================="<<endl;
				cout<<" =         DATA USER         ="<<endl;
				cout<<" ============================="<<endl;
				cout<<" = Nama : "<<cari->Nama<<endl;
				cout<<" = NIM  : "<<cari->NIM<<endl;
				cout<<" = MBTI : "<<cari->FYP<<endl;
				cout<<" ============================="<<endl;
			}
			cari=cari->next;
		}
	}
}


void hapusDepan() {
	User *hapus;
	string d;
	if (tail!=NULL) {
		if(head!=tail) {
			hapus=head;
			d=hapus->Nama;
			head=head->next;
			delete hapus;
		} else {
			d=tail->Nama;
			head=tail=NULL;
		}
		cout<<d<<" terhapus "<<endl;
	} else cout<<"Masih kosong\n";
}

//shelby
void clear() {
	User *bantu, *hapus;
	bantu =head;
	while(bantu!=NULL) {
		hapus=bantu;
		bantu=bantu->next;
		delete hapus;
	}
	head = NULL;
	cout<<" Clear ";
	cout<<endl;
}

string Personality() {
	string fyp;
	int Introvert=0,Ekstrovert=0,Sensing=0,intuitioN=0,Thinking=0,Feeling=0,Judging=0,Perceiving=0;
	for(int i=0; i<4; i++) {
		for(int j=0; j<3; j++) {
			char guess;
			cout<<"========================================================================================="<<endl;
			cout<<"= "<<soal[i][j]<<endl;
			for(int k=0; k<2; k++) {
				cout<<"= "<<opsi[i][j][k]<<endl;
			}
			cout<<"========================================================================================="<<endl;
			cout<<">>";
			cin>>guess;
			guess = toupper(guess);
			if(i==0) {
				if(guess=='A') {
					Introvert++;
				} else {
					Ekstrovert++;
				}
			}
			else if(i==1) {
				if(guess=='A') {
					Sensing++;
				} else {
					intuitioN++;
				}
			}
			else if(i==2) {
				if(guess=='A') {
					Thinking++;
				} else {
					Feeling++;
				}
			}
			else if(i==3) {
				if(guess=='A') {
					Judging++;
				} else {
					Perceiving++;
				}
			}
		}
		if(i==0) {
			if(Introvert>Ekstrovert) {
				fyp+='I';
			} else {
				fyp+='E';
			}
		}
		else if(i==1) {
			if(Sensing>intuitioN) {
				fyp+='S';
			} else {
				fyp+='N';
			}
		}
		else if(i==2) {
			if(Thinking>Feeling) {
				fyp+='T';
			} else {
				fyp+='F';
			}
		}
		else if(i==3) {
			if(Judging>Perceiving) {
				fyp+='J';
			} else {
				fyp+='P';
			}
		}
	}
	system("cls");
	cout<<"========================================================================================="<<endl;
	if(fyp=="INFP") {
		cout<<"= INFP merupakan individu yang idealis dan perfeksionis, kurang suka hal berbau logika"<<endl;
		cout<<"= Kelebihan  : Idealisme tinggi, Bekerja keras dan kreatif"<<endl;
		cout<<"= Kekurangan : Sering memaksakan kehendak dan Terlalu Fokus"<<endl;
		cout<<"= Pekerjaan  : Aktor, Arsitek, Sutradara, Designer dan fotografer"<<endl;
	}
	else if(fyp=="INTJ") {
		cout<<"= INTJ merupakan individu yang membuat dan menjalankan hal besar berdasar logika"<<endl;
		cout<<"= Kelebihan  : Perfeksionis, Mampu memprediksi suatu kemungkinan berdasar logika"<<endl;
		cout<<"= Kekurangan : Terlalu percaya diri, percaya pendapat diri sendiri"<<endl;
		cout<<"= Pekerjaan  : Hakim, Pengacara, Programmer, Dokter dan Profesor"<<endl;
	}
	else if(fyp=="INFJ") {
		cout<<"= INFJ merupakan individu yang bersikap tenang tapi memiliki cita-cita dan nilai mulia"<<endl;
		cout<<"= Kelebihan  : Intuisi tajam, Empati yang tinggi, Pribadi yang hangat"<<endl;
		cout<<"= Kekurangan : Terlalu sensitif, Menghindari konflik, mudah stress"<<endl;
		cout<<"= Pekerjaan  : Aktor, Seniman, Musisi, Pengusaha dan Pemuka Agama"<<endl;
	}
	else if(fyp=="INTP") {
		cout<<"= INTP merupakan pribadi pemikir yang cerdas dan mampu menyelesaikan suatu permasalahan"<<endl;
		cout<<"= Kelebihan  : Analisis yang hebat, berpikiran terbuka, selalu memberi apresiasi"<<endl;
		cout<<"= Kekurangan : pribadi yang tertutup, terlalu logis, kurang suka diatur dan lebih suka mengatur"<<endl;
		cout<<"= Pekerjaan  : Ahli Komputer, Arsitek, Pengacara, Hakim, Ahli Ekonomi"<<endl;
	}
	else if(fyp=="ISFJ") {
		cout<<"= ISFJ merupakan induvidu yang memiliki jiwa sosial tinggi tetapi suka menyembunyikan ekspresinya"<<endl;
		cout<<"= Kelebihan  : Senang membantu sesama, antusias, loyal, rendah hati"<<endl;
		cout<<"= Kekurangan : terlalu peduli dengan orang lain, tetapi tidak dengan dirinya sendiri"<<endl;
		cout<<"= Pekerjaan  : Guru, Perawat, Penjaga Toko, Akuntan dan desainer pakaian"<<endl;
	}
	else if(fyp=="ISFP") {
		cout<<"= ISFP merupakan induvidu yang Memiliki tingkat kesadaran tinggi terhadap lingkungan alam"<<endl;
		cout<<"= Kelebihan  : Baik hati, sangat menikmati hidupnya, bertanggung jawab"<<endl;
		cout<<"= Kekurangan : terlalu sensitif dan mudah percaya, lamban, tidak suka di kekang"<<endl;
		cout<<"= Pekerjaan  : Dokter Anak atau Hewan, Guru dan Seniman"<<endl;
	}
	else if(fyp=="ISTJ") {
		cout<<"= ISTJ merupakan induvidu yang pendiam dan berperilaku sedikit tertutup"<<endl;
		cout<<"= Kelebihan  : Bertanggung Jawab, bersikap jujur, Bekerja keras"<<endl;
		cout<<"= Kekurangan : Keras Kepala,Kaku dan sulit menerima perubahan"<<endl;
		cout<<"= Pekerjaan  : Dokter, Kepala Militer, Pustakawan dan Detektif"<<endl;
	}
	else if(fyp=="ISTP") {
		cout<<"= ISTJ merupakan induvidu yang memiliki kemampuan untuk mengerti suatu hal dapat bekerja"<<endl;
		cout<<"= Kelebihan  : MultiTasking, Fleksibel, dan Multitalent"<<endl;
		cout<<"= Kekurangan : Punya gaya hidup buruk yang sulit diubah, empati rendah"<<endl;
		cout<<"= Pekerjaan  : Pilot, Programmer, Ahli Forensik, Polisi dan Atlit"<<endl;
	}
	else if(fyp=="ENTJ") {
		cout<<"= ENTJ merupakan individu yang mampu membaca keadaan dengan pengetahuan luas yang dimilikinya"<<endl;
		cout<<"= Kelebihan  : lebih mementingkan efisiensi, Motivator, berkarisma"<<endl;
		cout<<"= Kekurangan : Egois, Arogan dan terlalu cepat mengambil keputusan"<<endl;
		cout<<"= Pekerjaan  : Pengusaha, Analisis, Hakim, Pengacara dan Konsultan"<<endl;
	}
	else if(fyp=="ENTP") {
		cout<<"= ENTP merupakan individu yang mampu mengerti kondisi sekitarnya"<<endl;
		cout<<"= Kelebihan  : Fleksibel, Pemikiran luas, antusias yang tinggi"<<endl;
		cout<<"= Kekurangan : Jarang menyelesaikan ide yang dibangun karena gampang pindah ide"<<endl;
		cout<<"= Pekerjaan  : Marketing, Konsultan, Programmer, Ilmuwan dan Psikolog"<<endl;
	}
	else if(fyp=="ENFJ") {
		cout<<"= ENFJ merupakan individu yang peduli serta mampu mengerti sesamanya ataupun orang lain"<<endl;
		cout<<"= Kelebihan  : Toleransi Tinggi, Terbuka akan pendapat dan kritikan"<<endl;
		cout<<"= Kekurangan : Mudah tertekan, Minder dan sering berimajinasi suatu hal buruk yang mungkin terjadi"<<endl;
		cout<<"= Pekerjaan  : HRD, Psikolog, Motivator, Pengajar, Marketing"<<endl;
	}
	else if(fyp=="ENFP") {
		cout<<"= ENFP merupakan individu yang berorientasi proyek-proyek sepanjang hidupnya"<<endl;
		cout<<"= Kelebihan  : Rasa ingin tahu tinggi, pemikiran terbuka, suka mengamati sekitar"<<endl;
		cout<<"= Kekurangan : Eksekusi ide yang buruk, sulit fokus, gampang marah jika dalam tekanan"<<endl;
		cout<<"= Pekerjaan  : Pengajar, MC, Reporter, Presenter, Seniman dan motivator"<<endl;
	}
	else if(fyp=="ESFJ") {
		cout<<"= ESFJ merupakan individu yang mampu mengemban tanggung jawab dalam melakukan hal-hal serius"<<endl;
		cout<<"= Kelebihan  : Mengeksekusi ide dengan baik, sangat dipercaya, loyal"<<endl;
		cout<<"= Kekurangan : mudah merasa tersakiti, kritis terhadap hal hal tidak biasa"<<endl;
		cout<<"= Pekerjaan  : Administrator, Guru, Perawat dan Konselor"<<endl;
	}
	else if(fyp=="ESFP") {
		cout<<"= ESPF merupakan individu yang sangat hangat dan berempati terhadap individu lain"<<endl;
		cout<<"= Kelebihan  : Menghadapi segala resiko yang ada, berani mencoba"<<endl;
		cout<<"= Kekurangan : bertindak secara emosional, cepat bosan"<<endl;
		cout<<"= Pekerjaan  : Tour Guide, Entertrainer, Designer dan Seniman"<<endl;
	}
	else if(fyp=="ESTJ") {
		cout<<"= ESTJ adalah tipe kepribadian sosok pemimpin dengan visi yang jelas agresif dan percaya diri"<<endl;
		cout<<"= Kelebihan  : Sangat fokus, manajemen waktu yang baik, sosok pemimpin yang baik"<<endl;
		cout<<"= Kekurangan : kaku, mudah bimbang, sulit berempati"<<endl;
		cout<<"= Pekerjaan  : Manajer, Auditor, Pengacara, Polisi dan Sistem Analist"<<endl;
	}
	else if(fyp=="ESTP") {
		cout<<"= ESTP merupakan orang-orang yang hidup dimasa kini, mereka jarang mengintrospeksi diri"<<endl;
		cout<<"= Kelebihan  : Pemberani dan Penuh Energi, mengamati segala hal karena memiliki pandangan yang luas"<<endl;
		cout<<"= Kekurangan : Kurang sensitif, perasaan orang lain diabaikan, tidak dapat dikekang"<<endl;
		cout<<"= Pekerjaan  : Entepreneur, Marketing, Sales, Polisi dan Technical Support"<<endl;
	}
	cout<<"========================================================================================="<<endl;
	return fyp;
}