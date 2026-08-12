int __userpurge sub_1014B3A0@<eax>(_DWORD *a1@<ecx>, int a2@<edi>, float a3, __int16 a4, int a5, int a6)
{
  int v6; // edi
  char v8; // bl
  int result; // eax
  float *v11; // [esp+4h] [ebp-10h]
  char v12; // [esp+13h] [ebp-1h]

  v6 = dword_103E7E94;
  dword_103E7E94 = -2;
  v12 = (*(int (__stdcall **)(_DWORD, int))(*a1 + 16))(LODWORD(a3), a2);
  if ( v12 )
    (*(void (__thiscall **)(int, _DWORD *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_10413168 + 152))(
      dword_10413168,
      a1 + 2,
      0,
      0,
      a1[31]);
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10413168 + 184))(dword_10413168);
  v11 = (a4 & 2) != 0 ? &a3 : 0;
  LOBYTE(a4) = (a4 & 0x2000) != 0;
  v8 = a4;
  sub_1014A8C0((int)a1, a4, a6, 1, 0, (int)v11);
  sub_10149440(a1);
  if ( v8 )
    sub_10143030(a1, v6);
  result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_10413168 + 188))(dword_10413168);
  if ( v12 )
    result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413168 + 160))(dword_10413168, a1[31]);
  dword_103E7E94 = v6;
  return result;
}
