int __usercall sub_101F2A20@<eax>(int a1@<ecx>, int a2@<edi>)
{
  int result; // eax
  unsigned int v4; // esi
  int *v5; // eax
  float v6; // [esp+0h] [ebp-Ch]

  if ( sub_100CF460((_DWORD *)a1) && (result = sub_100CF460((_DWORD *)a1), *(_BYTE *)(result + 1144)) )
  {
    *(_BYTE *)(a1 + 2124) = 0;
  }
  else if ( *(_BYTE *)(a1 + 2125) )
  {
    *(_BYTE *)(a1 + 2125) = 0;
    sub_101F02B0((float *)a1, a2);
    v6 = *(float *)(dword_106B31C8 + 12) + 0.15000001;
    return sub_100EC4A0((int *)a1, v6, (int)"FlareHitContext");
  }
  else
  {
    *(_BYTE *)(a1 + 2124) = 0;
    v4 = *(_DWORD *)(a1 + 4028);
    if ( v4 == -1 || off_1061BE18[4 * (v4 & 0xFFF) + 2] != v4 >> 12 )
    {
      return (*(int (__stdcall **)(int))(MEMORY[0] + 836))(1);
    }
    else
    {
      v5 = &off_1061BE18[4 * (v4 & 0xFFF) + 1];
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)*v5 + 836))(*v5, 1);
    }
  }
  return result;
}
