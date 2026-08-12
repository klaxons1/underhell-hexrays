void *__thiscall sub_101DA560(int this, int a2, int a3, void *a4, int a5)
{
  int v6; // edi
  unsigned __int16 v7; // ax
  int *v8; // esi
  int *v9; // eax
  void *v10; // edi
  int v11; // ebx
  int v13; // [esp+Ch] [ebp-8h] BYREF
  int *v14; // [esp+10h] [ebp-4h] BYREF

  v6 = this + 36;
  v13 = a2;
  v7 = sub_101D4050((_WORD *)(this + 36), (int)&v13);
  if ( v7 == 0xFFFF )
  {
    v9 = (int *)sub_10184390(20);
    v8 = 0;
    if ( v9 )
    {
      *v9 = 0;
      v9[1] = 0;
      v9[2] = 0;
      v9[3] = 0;
      v9[4] = 0;
      v8 = v9;
    }
    v14 = v8;
    sub_101DA380(v6, &a2, (int *)&v14);
  }
  else
  {
    v8 = *(int **)(*(_DWORD *)(this + 40) + 16 * v7 + 12);
  }
  v10 = a4;
  v11 = a3;
  sub_101D4D20(v8, a2, a3, (int)a4, a5);
  return memset(v10, 0, 4 * *(unsigned __int16 *)(v11 + 16));
}
