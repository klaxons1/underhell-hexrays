char __thiscall sub_1024CE50(int this, int a2, int a3, int a4, int a5, _DWORD *a6, _DWORD *a7)
{
  int v8; // ecx
  signed int v9; // ebp
  int v10; // ecx
  signed int v11; // edi
  __int64 v12; // rax
  char v14; // [esp+13h] [ebp-9h]
  int v15; // [esp+14h] [ebp-8h] BYREF
  int v16; // [esp+18h] [ebp-4h] BYREF

  sub_102361D0(*(int (__thiscall ****)(void *, int, int))(this + 204), (int)&v15, (int)&v16);
  v8 = a2;
  v9 = *(_DWORD *)(this + 244);
  v14 = 0;
  if ( (int)abs32(*a6 - a2) >= v9 )
  {
    if ( (int)abs32(v15 + *a6 - a2 - a4) >= v9 )
      goto LABEL_5;
    v8 = a4 + a2 - v15;
  }
  v14 = 1;
  *a6 = v8;
LABEL_5:
  v10 = a3;
  v11 = *(_DWORD *)(this + 244);
  if ( (int)abs32(*a7 - a3) < v11 )
  {
LABEL_8:
    *a7 = v10;
    return 1;
  }
  v12 = v16 + *a7 - a3 - a5;
  if ( (int)((HIDWORD(v12) ^ v12) - HIDWORD(v12)) < v11 )
  {
    v10 = a5 + a3 - v16;
    goto LABEL_8;
  }
  return v14;
}
