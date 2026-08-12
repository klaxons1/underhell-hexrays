int __thiscall sub_102FE2A0(int this, int a2)
{
  int v3; // eax
  double v4; // st7
  unsigned int v5; // ecx
  int *v6; // eax
  unsigned int v7; // ecx
  int v8; // eax
  int result; // eax
  int v10; // ecx
  int v11[10]; // [esp+8h] [ebp-50h] BYREF
  unsigned int v12; // [esp+30h] [ebp-28h]
  float v13; // [esp+3Ch] [ebp-1Ch]
  char v14; // [esp+48h] [ebp-10h]

  sub_1001E4E0(v11, a2);
  if ( *(_DWORD *)(dword_10698344 + 48) )
  {
    if ( *(_DWORD *)(dword_106E2CD4 + 48) )
    {
      if ( (v14 & 1) != 0 && v12 != -1 && off_1061BE18[4 * (v12 & 0xFFF) + 2] == v12 >> 12 )
      {
        if ( off_1061BE18[4 * (v12 & 0xFFF) + 1] )
        {
          if ( *(_DWORD *)(sub_100232D0(v11) + 424) )
          {
            v3 = sub_100232D0(v11);
            if ( ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(v3 + 424) + 116))(*(_DWORD *)(v3 + 424)) > 250.0 )
            {
              v4 = (double)*(int *)(this + 220);
              if ( v4 > v13 )
                v13 = v4;
            }
          }
        }
      }
    }
  }
  if ( (*(_DWORD *)(this + 252) & 0x100000) != 0 )
  {
    v5 = *(_DWORD *)(a2 + 44);
    if ( v5 != -1 )
    {
      v6 = &off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 1];
      v7 = v5 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] == v7 )
      {
        if ( *v6 )
        {
          v8 = off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] == v7 ? *v6 : 0;
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 220))(v8) != 5 )
            return 0;
        }
      }
    }
  }
  v10 = *(_DWORD *)(this + 3624);
  if ( v10 )
    result = (*(int (__thiscall **)(int, int *))(*(_DWORD *)v10 + 200))(v10, v11);
  else
    result = sub_10035940((int *)this, a2, (int)v11);
  if ( *(float *)(dword_106B31C8 + 12) - *(float *)(this + 4140) >= 0.5 )
    *(_DWORD *)(this + 4136) = result;
  else
    *(_DWORD *)(this + 4136) += result;
  *(float *)(this + 4140) = *(float *)(dword_106B31C8 + 12);
  return result;
}
