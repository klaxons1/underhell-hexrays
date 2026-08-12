char __thiscall sub_10240370(int this)
{
  double v3; // st7
  int v4; // edx
  int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // edi
  int *v10; // eax
  int v11; // edi
  int v12; // ebx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  _DWORD *v16; // eax
  _BYTE v17[16384]; // [esp+Ch] [ebp-4020h] BYREF
  float v18[3]; // [esp+400Ch] [ebp-20h] BYREF
  float v19[3]; // [esp+4018h] [ebp-14h] BYREF
  int v20; // [esp+4024h] [ebp-8h]
  int i; // [esp+4028h] [ebp-4h]

  if ( *(float *)(this + 892) > (double)*(float *)(dword_106B31C8 + 12) )
    return 0;
  v3 = RandomFloat(-0.30000001, 0.30000001);
  v4 = *(_DWORD *)(this + 252) >> 11;
  *(float *)(this + 892) = v3 + *(float *)(dword_106B31C8 + 12) + 2.0;
  if ( (v4 & 1) != 0 )
    sub_100DAE60(this);
  v5 = *(_DWORD *)dword_106B31D0;
  v6 = (*(int (__thiscall **)(int, int, int, _BYTE *))(*(_DWORD *)dword_106B31D0 + 44))(
         dword_106B31D0,
         this + 580,
         0x4000,
         v17);
  v20 = (*(int (__thiscall **)(int, int))(v5 + 48))(dword_106B31D0, v6);
  *(_DWORD *)(this + 884) = 0;
  if ( *(int *)(this + 880) >= 0 )
  {
    if ( *(_DWORD *)(this + 872) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this + 872));
      *(_DWORD *)(this + 872) = 0;
    }
    *(_DWORD *)(this + 876) = 0;
  }
  *(_DWORD *)(this + 888) = *(_DWORD *)(this + 872);
  v7 = 1;
  for ( i = 1; v7 <= *(_DWORD *)(dword_106B31C8 + 20); i = v7 )
  {
    v8 = sub_1025FB50(v7);
    v9 = v8;
    if ( v8 )
    {
      sub_10111910((_BYTE *)(v8 + 320), (float *)(v8 + 328), (float *)(v8 + 340), v18, v19);
      if ( (*(unsigned __int8 (__thiscall **)(int, float *, float *, _BYTE *, int))(*(_DWORD *)dword_106B31D0 + 56))(
             dword_106B31D0,
             v18,
             v19,
             v17,
             v20) )
      {
        v10 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)v9 + 8))(v9);
        v11 = *(_DWORD *)(this + 884);
        v12 = *v10;
        v13 = *(_DWORD *)(this + 876);
        if ( v11 + 1 > v13 )
          sub_102ABFC0(v11 - v13 + 1);
        ++*(_DWORD *)(this + 884);
        v14 = *(_DWORD *)(this + 872);
        v15 = *(_DWORD *)(this + 884) - v11 - 1;
        *(_DWORD *)(this + 888) = v14;
        if ( v15 > 0 )
          memcpy((void *)(v14 + 4 * v11 + 4), (const void *)(v14 + 4 * v11), 4 * v15);
        v16 = (_DWORD *)(*(_DWORD *)(this + 872) + 4 * v11);
        if ( v16 )
          *v16 = v12;
      }
    }
    v7 = i + 1;
  }
  return 1;
}
