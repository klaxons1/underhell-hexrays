int __userpurge sub_1036B460@<eax>(int *a1@<ecx>, int a2@<edi>, int a3)
{
  unsigned int v4; // ecx
  bool v5; // zf
  signed int v6; // eax
  int v8[13]; // [esp+30h] [ebp-50h] BYREF
  float v9; // [esp+64h] [ebp-1Ch]
  int v10; // [esp+70h] [ebp-10h]

  sub_1001E4E0(v8, a3);
  if ( (v10 & 0x100000) != 0 )
    v9 = 0.0;
  if ( (v10 & 0x80u) != 0 )
    v9 = (float)a1[55];
  if ( (v10 & 0x40) != 0
    && !(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 1) )
  {
    (*(void (__thiscall **)(int *, _DWORD, int, _DWORD, _DWORD))(*a1 + 808))(a1, 30.0, 1, 0.0, 0);
  }
  if ( (v10 & 8) != 0 )
  {
    v4 = (unsigned int)a1[64] >> 27;
    v9 = v9 * 0.25;
    if ( (v4 & 1) != 0 )
    {
      sub_100C4050(a1, 5, 30);
      if ( a1[55] <= 1 )
      {
        v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, a1[6]) & 0x80000001;
        v5 = v6 == 0;
        if ( v6 < 0 )
          v5 = (((_BYTE)v6 - 1) | 0xFFFFFFFE) == -1;
        if ( !v5 && !sub_100697A0(a1, 88, 1) && !sub_1002A570(a1) )
          sub_100457E0(a1, 88);
      }
    }
    (*(void (__thiscall **)(int *, _DWORD, int, _DWORD, _DWORD))(*a1 + 808))(a1, 30.0, 1, 0.0, 0);
  }
  return sub_10035940(a1, a2, (int)v8);
}
