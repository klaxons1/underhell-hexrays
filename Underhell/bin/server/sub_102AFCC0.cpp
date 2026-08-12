int __thiscall sub_102AFCC0(int this)
{
  int v2; // eax
  int v3; // edi
  int result; // eax
  int v5; // ecx

  if ( *(_BYTE *)(this + 1396) && *(float *)(this + 1392) < (double)*(float *)(dword_106B31C8 + 12) )
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 1444))(this);
  v2 = sub_100D1940((_DWORD *)this);
  v3 = v2;
  if ( !v2 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 320))(v2) )
    v3 = 0;
  result = (*(int (__thiscall **)(int))(*(_DWORD *)this + 1428))(this);
  if ( !(_BYTE)result && v3 )
  {
    v5 = *(_DWORD *)(v3 + 3292);
    if ( (v5 & 1) != 0 && *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 1132) )
    {
      return (*(int (__thiscall **)(int))(*(_DWORD *)this + 1068))(this);
    }
    else if ( (v5 & 0x800) != 0 && *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 1136) )
    {
      return (*(int (__thiscall **)(int))(*(_DWORD *)this + 1072))(this);
    }
    else
    {
      return (*(int (__thiscall **)(int))(*(_DWORD *)this + 1036))(this);
    }
  }
  return result;
}
