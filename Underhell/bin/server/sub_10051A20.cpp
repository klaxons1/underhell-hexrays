int __userpurge sub_10051A20@<eax>(_DWORD *a1@<ecx>, char a2@<sil>, int a3)
{
  int result; // eax
  int v5; // edi
  int *v6; // ecx
  int v7; // esi
  char v8; // di
  char Buffer[512]; // [esp+20h] [ebp-204h] BYREF
  _DWORD *v11; // [esp+220h] [ebp-4h]
  int v12; // [esp+22Ch] [ebp+8h]

  v11 = a1;
  result = sub_1004B3A0(a1, a3);
  v5 = result;
  v12 = result;
  if ( (*(_BYTE *)(a1[1] + 236) & 1) != 0 )
  {
    if ( a1[5] != -1
      && (v6 = &off_1061BE18[4 * (a1[5] & 0xFFF) + 1], off_1061BE18[4 * (a1[5] & 0xFFF) + 2] == a1[5] >> 12)
      && (v7 = *v6) != 0 )
    {
      v8 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(v7 + 24));
      sub_100D6390(v7);
      sub_10429A00(Buffer, 0x200u, "Follow: (%d) %s (%s)", v8);
      v5 = v12;
    }
    else
    {
      sub_10429A00(Buffer, 0x200u, "Follow: NULL", a2);
    }
    sub_100D5DE0(v5, (int)Buffer, 0.0, 255, 255, 255, 255);
    return v5 + 1;
  }
  return result;
}
