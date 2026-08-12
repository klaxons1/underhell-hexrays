char __userpurge sub_100DA620@<al>(
        int a1@<ecx>,
        int a2@<ebp>,
        int a3@<edi>,
        int a4@<esi>,
        _DWORD *a5,
        int a6,
        _DWORD *a7)
{
  int v9; // eax
  float v11[20]; // [esp+2Ch] [ebp-DCh] BYREF
  _BYTE v12[12]; // [esp+7Ch] [ebp-8Ch] BYREF
  float v13[10]; // [esp+88h] [ebp-80h] BYREF
  char v14; // [esp+B3h] [ebp-55h]
  _DWORD *v15; // [esp+C8h] [ebp-40h]
  int v16; // [esp+D4h] [ebp-34h] BYREF
  float v17[3]; // [esp+E4h] [ebp-24h] BYREF
  float v18[3]; // [esp+F0h] [ebp-18h] BYREF
  _DWORD v19[3]; // [esp+FCh] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+108h] [ebp+0h]

  v19[0] = a2;
  v19[1] = retaddr;
  if ( (a5[64] & 0x8000) == 0 )
  {
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)a1 + 504))(a1, v17);
    (*(void (__thiscall **)(_DWORD *, float *))(*a5 + 504))(a5, v18);
    if ( *(_DWORD *)(dword_1069109C + 48) )
    {
      sub_1002A5F0((int)v19, a1, v17, v18, a6, a1, 0, (int)v12);
    }
    else
    {
      if ( a6 == 16449 )
        a6 = 33570881;
      if ( (*(unsigned __int8 (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 320))(a1, a3, a4) )
        a6 &= ~0x40u;
      sub_10265790(a1, 0, a5);
      sub_1001F180(v11, v17, v18);
      (*(void (__thiscall **)(int, float *, int, int *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
        dword_106B31F4,
        v11,
        a6,
        &v16,
        v12);
      if ( *(_DWORD *)(dword_106CE63C + 48) )
        sub_101A0AD0((int)v12, (int)v13, 255, 0, 0, 1, -1.0);
    }
    if ( 1.0 == v13[8] && !v14 )
      return 1;
    if ( v15 == a5 )
      return 1;
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a5 + 320))(a5) )
    {
      v9 = (*(int (__thiscall **)(_DWORD *))(*a5 + 1096))(a5);
      if ( v15 == (_DWORD *)v9 )
        return 1;
    }
    if ( a7 )
      *a7 = v15;
  }
  return 0;
}
