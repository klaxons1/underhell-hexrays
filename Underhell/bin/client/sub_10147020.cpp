_BYTE *__thiscall sub_10147020(int this, const void *a2, char a3, _DWORD *a4, _BYTE *a5)
{
  char v6; // al
  _BYTE *result; // eax

  sub_10145000((_DWORD *)this, a2);
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C97C + 120))(dword_1047C97C);
  *(_BYTE *)(this + 324) = v6;
  sub_101432D0((float *)this, (int)a4, (float *)(this + 316), (float *)(this + 320), v6);
  if ( 0.0 == *(float *)(this + 320) )
    *(_BYTE *)(this + 324) = 0;
  *(_DWORD *)(this + 132) = 8224;
  *(_DWORD *)(this + 136) = 2;
  if ( a3 )
    *(_DWORD *)(this + 132) = 10272;
  result = a5;
  if ( (*a5 & 0x10) != 0 )
    *(_DWORD *)(this + 132) |= 0x40u;
  if ( (*a5 & 0x24) == 0 )
    *(_DWORD *)(this + 132) |= 0x10u;
  *(_DWORD *)(this + 328) = *a4;
  *(_DWORD *)(this + 332) = a4[1];
  *(_DWORD *)(this + 336) = a4[2];
  *(_DWORD *)(this + 340) = a4[3];
  *(_DWORD *)(this + 344) = a4[4];
  *(_DWORD *)(this + 348) = a4[5];
  *(_BYTE *)(this + 312) = *a5;
  return result;
}
