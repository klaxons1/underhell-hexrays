bool __usercall sub_103CFD80@<al>(int a1@<ecx>, int a2@<edi>)
{
  bool result; // al
  int v4; // ebx
  int v5; // eax
  int v6; // edi
  unsigned int v7; // eax
  int v8; // edi
  float *v9; // esi
  float *v10; // eax
  double v11; // st7
  double v12; // st4
  double v13; // st5
  float v14; // [esp+Ch] [ebp-18h]
  float v16; // [esp+1Ch] [ebp-8h]

  if ( (*(_DWORD *)(a1 + 256) & 0x8000000) != 0 || *(float *)(dword_106B31C8 + 12) < (double)*(float *)(a1 + 3840) )
    return 0;
  v4 = 10;
  if ( *(int *)(dword_106B31C8 + 20) <= 1 )
    v5 = sub_10261B20();
  else
    v5 = 0;
  v6 = __RTDynamicCast(
         v5,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBasePlayer `RTTI Type Descriptor',
         (int)&CHL2_Player `RTTI Type Descriptor',
         0);
  if ( v6 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B3CDC + 508))(dword_106B3CDC, a2)
      && !(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 1264))(v6) )
    {
      v4 = 50;
    }
    if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v6 + 876))(v6, a1) )
      v4 *= 2;
  }
  v7 = *(_DWORD *)(a1 + 3860);
  if ( v7 != -1
    && off_1061BE18[4 * (*(_DWORD *)(a1 + 3860) & 0xFFF) + 2] == v7 >> 12
    && off_1061BE18[4 * (*(_DWORD *)(a1 + 3860) & 0xFFF) + 1] )
  {
    v4 *= 4;
  }
  v16 = (float)*(int *)(a1 + 220);
  result = 0;
  if ( (double)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 448))(a1) * 0.5 >= v16
    || !sub_1004AE70((_DWORD *)a1, 8, 9)
    && (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 100) <= v4
    && *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(a1 + 3844) )
  {
    v8 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
    v9 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 576))(a1);
    v10 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 576))(v8);
    v11 = *v10 - *v9;
    v12 = v10[1] - v9[1];
    v13 = v10[2] - v9[2];
    v14 = v13 * v13 + v12 * v12 + v11 * v11;
    if ( off_10689708(v14) <= 1024.0 )
      return 1;
  }
  return result;
}
