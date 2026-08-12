int __fastcall sub_10037490(int a1, int a2, int a3)
{
  int v4; // edi
  int result; // eax
  char v6; // cl

  if ( (unsigned __int8)sub_100764F0(a1 != 8 ? a1 : 0, a3, a1 + 1108) )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 16))(a1, a3);
  if ( a3 )
  {
    sub_100370C0((float *)(a1 - 8), (_DWORD *)(a1 + 12));
  }
  else if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)(a1 - 8) + 428))(a1 - 8) )
  {
    *(float *)(a1 + 268) = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_1041315C + 60))(dword_1041315C);
    v4 = dword_1047CA8C;
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA8C + 100))(dword_1047CA8C);
    (*(void (__thiscall **)(int))(*(_DWORD *)(a1 - 8) + 120))(a1 - 8);
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 104))(v4);
  }
  *(float *)(a1 + 516) = *(float *)(a1 + 700);
  *(float *)(a1 + 520) = *(float *)(a1 + 704);
  *(float *)(a1 + 524) = *(float *)(a1 + 708);
  *(float *)(a1 + 528) = *(float *)(a1 + 712);
  *(float *)(a1 + 532) = *(float *)(a1 + 716);
  *(float *)(a1 + 536) = *(float *)(a1 + 720);
  result = *(unsigned __int16 *)(a1 + 110);
  v6 = *(_BYTE *)(a1 + 108);
  *(float *)(a1 + 92) = *(float *)(a1 + 88);
  *(_BYTE *)(a1 + 109) = v6;
  *(float *)(a1 + 100) = *(float *)(a1 + 96);
  if ( (_WORD)result != 0xFFFF )
    return (*(int (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)off_103DCDDC + 104))(
             off_103DCDDC,
             result,
             *(unsigned __int8 *)(a1 + 1103));
  return result;
}
