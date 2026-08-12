void __usercall sub_101FA200(int a1@<eax>, int a2@<ecx>)
{
  int v3; // ebx
  bool v4; // zf
  int v5; // eax
  int v6; // ebp
  float *v7; // edi
  int v8; // eax
  int v9; // ecx
  int v10; // [esp+20h] [ebp-4h] BYREF

  v3 = 0;
  *(float *)(a2 + 44) = 0.0;
  v4 = (*(_BYTE *)(a2 + 6592) & 2) == 0;
  *(_DWORD *)(a2 + 6600) = 0;
  if ( v4 )
    sub_101F7F00(a1, a2, 0.050000001);
  v5 = *(_DWORD *)(a2 + 64);
  *(_DWORD *)(a2 + 6628) = 0;
  v6 = *(_DWORD *)(v5 + 580);
  if ( v6 > 0 )
  {
    do
    {
      v7 = *(float **)(*(_DWORD *)(*(_DWORD *)(a2 + 64) + 568) + 4 * v3);
      if ( (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)v7 + 108))(v7)
        && sub_101F7E80((float *)a2, v7, (float *)&v10) )
      {
        v8 = (*(int (__thiscall **)(float *, int, int, int))(*(_DWORD *)v7 + 28))(
               v7,
               a2,
               v10,
               *(_DWORD *)(a2 + 5976) + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a2 + 64) + 708) + 4 * v3));
        sub_101F7F00(v8, a2, 0.050000001);
      }
      *(_DWORD *)(a2 + 6628) += 17;
      ++v3;
    }
    while ( v3 < v6 );
  }
  v9 = *(_DWORD *)(a2 + 72);
  if ( *(_DWORD *)(*(_DWORD *)(a2 + 64) + 4) < v9 )
    v9 = *(_DWORD *)(*(_DWORD *)(a2 + 64) + 4);
  if ( v9 > 0 )
  {
    *(_DWORD *)(a2 + 40) = v9;
    *(_DWORD *)(a2 + 32) = (v9 + 3) / 4;
    sub_101F9E60(a2, 0, v9, 0);
  }
}
