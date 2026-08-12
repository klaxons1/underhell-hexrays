int __usercall sub_103F64E0@<eax>(int a1@<ecx>, double a2@<st0>)
{
  int result; // eax
  int v4; // edi
  int v5; // ecx
  float v6; // [esp+8h] [ebp-4h] BYREF

  result = sub_100D1940((_DWORD *)a1);
  v4 = result;
  if ( result )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 320))(result);
    if ( (_BYTE)result )
    {
      if ( *(_BYTE *)(a1 + 1392) )
      {
        if ( (*(_BYTE *)(v4 + 3292) & 1) == 0 )
        {
          (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 944))(a1, 179);
          sub_100D18C0(a1);
          v6 = a2 + *(float *)(dword_106B31C8 + 12);
          sub_100D2D00((float *)(a1 + 1132), &v6);
          *(_BYTE *)(a1 + 1392) = 0;
        }
      }
      else
      {
        v5 = *(_DWORD *)(v4 + 3292);
        if ( (v5 & 1) != 0 && *(float *)(dword_106B31C8 + 12) > (double)*(float *)(a1 + 1132) )
        {
          (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 1068))(a1);
        }
        else if ( (v5 & 0x800) != 0 && *(float *)(dword_106B31C8 + 12) > (double)*(float *)(a1 + 1136) )
        {
          (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 1072))(a1);
        }
      }
      if ( *(_BYTE *)(a1 + 1393) )
      {
        if ( sub_100D1EB0((_DWORD *)a1) )
          (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 1064))(a1);
      }
      return (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 1036))(a1);
    }
  }
  return result;
}
