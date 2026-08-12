char __thiscall sub_103FC8F0(_DWORD *this, float a2)
{
  unsigned int v3; // eax
  int v4; // ebx
  int *v5; // ecx
  int v6; // ecx
  _BYTE *v7; // esi
  int v8; // esi
  unsigned int v9; // eax
  int *v10; // ecx
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  unsigned int *v14; // ebx
  unsigned int v15; // esi
  int v16; // edi
  unsigned int v17; // eax
  int *v18; // ecx
  char v20; // [esp+1Ch] [ebp-8h]
  int v21; // [esp+20h] [ebp-4h]
  float v22; // [esp+2Ch] [ebp+8h]

  v3 = this[2268];
  if ( v3 == -1 )
  {
    v4 = 0;
    v21 = 0;
  }
  else
  {
    v5 = &off_1061BE18[4 * (this[2268] & 0xFFF) + 1];
    if ( v5[1] == v3 >> 12 )
    {
      v21 = *v5;
      v4 = *v5;
    }
    else
    {
      v21 = 0;
      v4 = 0;
    }
  }
  v20 = 0;
  if ( !LOBYTE(a2) )
  {
    if ( v4 )
    {
      v6 = *(_DWORD *)(v4 + 424);
      if ( v6 )
        v20 = (*(unsigned __int8 (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v6 + 264))(v6, 0, 0) != 0;
    }
  }
  sub_103FA2C0(this + 200, v20);
  if ( v4 )
    sub_101FB150(v4, this[2282], LOBYTE(a2) != 0);
  v7 = (_BYTE *)this[2282];
  if ( v7 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v7 + 320))(this[2282]) )
      sub_102E0DB0(v7, 1);
    v8 = this[2282];
    v9 = *(_DWORD *)(v8 + 3404);
    if ( v9 != -1
      && off_1061BE18[4 * (*(_DWORD *)(v8 + 3404) & 0xFFF) + 2] == v9 >> 12
      && off_1061BE18[4 * (*(_DWORD *)(v8 + 3404) & 0xFFF) + 1] )
    {
      if ( *(_BYTE *)(v8 + 84) )
      {
        *(_BYTE *)(v8 + 88) |= 1u;
      }
      else
      {
        v10 = *(int **)(v8 + 24);
        if ( v10 )
          sub_100194B0(v10, 3404);
      }
      *(_DWORD *)(v8 + 3404) = -1;
    }
    if ( sub_100CF460((_DWORD *)this[2282]) )
    {
      v11 = sub_100CF460((_DWORD *)this[2282]);
      if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v11 + 992))(v11) )
        sub_100CF400((void *)this[2282], 0);
    }
    v12 = this[2282];
    v13 = *(_DWORD *)(v12 + 2252);
    v14 = (unsigned int *)(v12 + 2252);
    v15 = v13 & 0xFFFFFFFE;
    if ( v13 != (v13 & 0xFFFFFFFE) )
    {
      (*(void (__thiscall **)(unsigned int *, unsigned int *))*(v14 - 15))(v14 - 15, v14);
      *v14 = v15;
    }
    v4 = v21;
  }
  sub_100D6A00(this);
  v16 = this[2282];
  LOBYTE(v17) = sub_101CB470(v4);
  if ( (_BYTE)v17 || !v4 )
  {
    v17 = *(_DWORD *)(v16 + 2180);
    if ( v17 != -1 )
    {
      v17 >>= 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(v16 + 2180) & 0xFFF) + 2] == v17 )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(v16 + 2180) & 0xFFF) + 1] )
        {
          v22 = *(float *)(dword_106E0734 + 44);
          if ( *(_DWORD *)(v16 + 4132) != LODWORD(v22) )
          {
            if ( *(_BYTE *)(v16 + 84) )
            {
              *(_BYTE *)(v16 + 88) |= 1u;
            }
            else
            {
              v18 = *(int **)(v16 + 24);
              if ( v18 )
                sub_100194B0(v18, 4132);
            }
            *(float *)(v16 + 4132) = v22;
          }
          sub_102DFC70((unsigned int *)v16, v4);
          LOBYTE(v17) = sub_1042C7F0(*(float *)(v16 + 5372));
        }
      }
    }
  }
  return v17;
}
