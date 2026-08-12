unsigned int __thiscall sub_100D3C30(int *this)
{
  unsigned int result; // eax
  int *v3; // ecx
  int v4; // ecx
  unsigned int v5; // edi
  double v6; // st7
  float v7; // edx
  unsigned __int8 (__thiscall *v8)(int *); // eax
  void (__thiscall *v9)(int *); // eax
  double v10; // [esp+18h] [ebp-10h] BYREF
  unsigned int v11; // [esp+20h] [ebp-8h]
  char v12; // [esp+27h] [ebp-1h]

  result = this[280];
  if ( result == -1 )
    return result;
  v3 = &off_1061BE18[4 * (this[280] & 0xFFF) + 1];
  result >>= 12;
  if ( v3[1] != result )
    return result;
  v4 = *v3;
  if ( !v4 )
    return result;
  result = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 288))(v4);
  v5 = result;
  v11 = result;
  if ( !result )
    return result;
  result = (*(int (__thiscall **)(unsigned int))(*(_DWORD *)result + 320))(result);
  if ( !(_BYTE)result )
    return result;
  if ( (*(_BYTE *)(v5 + 3292) & 1) != 0 )
    v6 = *((float *)this + 308) + *(float *)(dword_106B31C8 + 16);
  else
    v6 = 0.0;
  v7 = *(float *)this;
  *((float *)this + 308) = v6;
  if ( (*(unsigned __int8 (__thiscall **)(int *))(LODWORD(v7) + 1272))(this) )
    (*(void (__thiscall **)(int *))(*this + 1052))(this);
  if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 872))(this) )
    (*(void (__thiscall **)(int *))(*this + 1048))(this);
  v8 = *(unsigned __int8 (__thiscall **)(int *))(*this + 1428);
  v12 = 0;
  if ( (v8(this) || (*(unsigned __int8 (__thiscall **)(int *))(*this + 1432))(this)) && !*((_BYTE *)this + 1144) )
  {
    v9 = *(void (__thiscall **)(int *))(*this + 1036);
    v12 = 1;
    v9(this);
  }
  if ( (*(_DWORD *)(v5 + 3292) & 0x800) != 0 && *(float *)(dword_106B31C8 + 12) >= (double)*((float *)this + 284) )
  {
    if ( this[299] < 0 || sub_100CF5D0((_DWORD *)v5, this[299]) > 0 )
    {
      if ( *(_BYTE *)(v5 + 447) != 3 || *((_BYTE *)this + 1209) )
      {
        if ( !v12 )
        {
          (*(void (__thiscall **)(int *))(*this + 1072))(this);
          if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 1276))(this) )
          {
            if ( this[301] < 1 )
            {
              sub_100CF490((char *)v5, 1, this[299]);
              HIDWORD(v10) = this[301] + 1;
              sub_100CBCD0(this + 301, (_DWORD *)&v10 + 1);
            }
          }
        }
        goto LABEL_46;
      }
      goto LABEL_41;
    }
    if ( *(float *)(dword_106B31C8 + 12) > (double)*((float *)this + 289) )
    {
      (*(void (__thiscall **)(int *, _DWORD, _DWORD))(*this + 1132))(this, 0, 0.0);
      *((float *)this + 289) = *(float *)(dword_106B31C8 + 12) + 0.5;
      sub_100D2D50((float *)this + 284, (float *)this + 289);
    }
    v5 = v11;
  }
  if ( v12 || (*(_BYTE *)(v5 + 3292) & 1) == 0 || *(float *)(dword_106B31C8 + 12) < (double)*((float *)this + 283) )
    goto LABEL_46;
  if ( sub_100D0E00((__int16 *)this)
    || (!(*(unsigned __int8 (__thiscall **)(int *))(*this + 1272))(this) || this[300] > 0)
    && ((*(unsigned __int8 (__thiscall **)(int *))(*this + 1272))(this) || sub_100CF5D0((_DWORD *)v5, this[298]) > 0) )
  {
    if ( *(_BYTE *)(v5 + 447) != 3 || *((_BYTE *)this + 1208) )
    {
      if ( (*(_BYTE *)(v5 + 3296) & 1) != 0 || (*(_DWORD *)(v5 + 3300) & 0x800) != 0 )
        sub_100D2D00((float *)this + 283, (float *)(dword_106B31C8 + 12));
      (*(void (__thiscall **)(int *))(*this + 1068))(this);
      goto LABEL_46;
    }
LABEL_41:
    (*(void (__thiscall **)(int *, _DWORD, _DWORD))(*this + 1132))(this, 0, 0.0);
    v10 = *(float *)(dword_106B31C8 + 12) + 0.2;
    return (unsigned int)sub_100D2DA0((float *)this + 283, &v10);
  }
  (*(void (__thiscall **)(int *))(*this + 1040))(this);
LABEL_46:
  if ( (*(_DWORD *)(v5 + 3292) & 0x2000) != 0
    && (*(unsigned __int8 (__thiscall **)(int *))(*this + 1272))(this)
    && !*((_BYTE *)this + 1144) )
  {
    (*(void (__thiscall **)(int *))(*this + 1064))(this);
    *((float *)this + 308) = 0.0;
  }
  result = *(_DWORD *)(v5 + 3292);
  if ( (result & 1) == 0 && (result & 0x2800) == 0 )
  {
    result = (*(int (__thiscall **)(int *))(*this + 1012))(this);
    if ( !(_BYTE)result && !*((_BYTE *)this + 1144) )
      return (*(int (__thiscall **)(int *))(*this + 1036))(this);
  }
  return result;
}
