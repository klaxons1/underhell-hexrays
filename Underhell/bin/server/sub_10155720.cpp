int sub_10155720()
{
  int v0; // esi
  int (__thiscall *v1)(int); // edx

  v0 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  sub_10170050();
  sub_1023C820();
  sub_1012D2D0((int)&dword_1069E3E0);
  sub_10170060();
  sub_100E8660(0);
  v1 = *(int (__thiscall **)(int))(*(_DWORD *)v0 + 104);
  dword_10627B14 = -1;
  return v1(v0);
}
