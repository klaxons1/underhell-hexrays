_DWORD *__thiscall sub_102E49F0(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int *v4; // ecx
  int v5; // eax
  int v6; // eax
  float v8; // [esp+8h] [ebp-4h] BYREF

  v2 = *(_DWORD *)(this + 2180);
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 2180) & 0xFFF) + 1];
    if ( v3[1] == v2 >> 12 )
    {
      if ( *v3 )
      {
        if ( *(_BYTE *)(this + 84) )
        {
          *(_BYTE *)(this + 88) |= 1u;
        }
        else
        {
          v4 = *(int **)(this + 24);
          if ( v4 )
            sub_100194B0(v4, 2180);
        }
        *(_DWORD *)(this + 2180) = -1;
      }
    }
  }
  sub_101E5DE0((_DWORD *)this);
  sub_102E0CB0(this);
  if ( !sub_100CF460((_DWORD *)this) )
    return sub_102DBB80((_DWORD *)this);
  if ( *(float *)(sub_100CF460((_DWORD *)this) + 1132) - *(float *)(dword_106B31C8 + 12) < 1.0 )
  {
    v8 = *(float *)(dword_106B31C8 + 12) + 1.0;
    v5 = sub_100CF460((_DWORD *)this);
    sub_100D2D00((float *)(v5 + 1132), &v8);
  }
  if ( *(float *)(sub_100CF460((_DWORD *)this) + 1136) - *(float *)(dword_106B31C8 + 12) >= 1.0 )
    return sub_102DBB80((_DWORD *)this);
  v8 = *(float *)(dword_106B31C8 + 12) + 1.0;
  v6 = sub_100CF460((_DWORD *)this);
  sub_100D2D50((float *)(v6 + 1136), &v8);
  return sub_102DBB80((_DWORD *)this);
}
