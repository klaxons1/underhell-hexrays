_DWORD *__thiscall sub_103FD8D0(int this)
{
  _DWORD *result; // eax
  int v3; // eax
  int *v4; // ecx
  float v5; // [esp+0h] [ebp-14h]
  int v6; // [esp+10h] [ebp-4h] BYREF

  result = (_DWORD *)dword_106B3CDC;
  if ( *(_BYTE *)(dword_106B3CDC + 12) != 1 && !*(_BYTE *)(this + 1412) )
  {
    v3 = sub_100BDCE0(this, 262);
    sub_100C1170(this, v3);
    sub_100C2AB0(this);
    if ( *(_BYTE *)(this + 1412) != 1 )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v4 = *(int **)(this + 24);
        if ( v4 )
          sub_100194B0(v4, 1412);
      }
      *(_BYTE *)(this + 1412) = 1;
    }
    v5 = *(float *)(dword_106B31C8 + 12) + 6.0;
    sub_100EC3F0((_DWORD *)this, (int)sub_103FCF80, v5, off_10685600);
    sub_1023C380((_DWORD *)this, (int)"WeaponDissolve.Charge", 0.0, 0);
    sub_10112D90((unsigned __int16 *)(this + 320), 1, 32.0);
    v6 = 1;
    return sub_10031670((_DWORD *)(this + 848), &v6);
  }
  return result;
}
