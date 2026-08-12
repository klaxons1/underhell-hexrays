char *__thiscall sub_1029AD20(float *this, int a2)
{
  int v3; // eax
  char *result; // eax

  if ( *(_DWORD *)(a2 + 24) != 13 )
  {
    if ( (dword_10697954 & 1) == 0 )
      dword_10697954 |= 1u;
    dword_10697950 = -1;
    goto LABEL_5;
  }
  if ( *(_DWORD *)(a2 + 20) == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 20) & 0xFFF) + 2] != *(_DWORD *)(a2 + 20) >> 12 )
  {
LABEL_5:
    v3 = 0;
    goto LABEL_6;
  }
  v3 = off_1061BE18[4 * (*(_DWORD *)(a2 + 20) & 0xFFF) + 1];
LABEL_6:
  result = (char *)sub_10295D50(v3, "InputForceThisNPCToLeave");
  if ( result )
  {
    *((float *)result + 12) = this[213];
    return sub_1029A0C0((int)result, 0);
  }
  return result;
}
