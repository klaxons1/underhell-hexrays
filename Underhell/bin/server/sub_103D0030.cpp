void __userpurge sub_103D0030(int a1@<ecx>, int a2@<edi>, _DWORD *a3)
{
  float v4; // [esp+4h] [ebp-4h]

  if ( (unsigned int)(*a3 - 129) > 1 )
  {
    sub_1032CFB0((int *)a1, a3);
    return;
  }
  sub_1032CFB0((int *)a1, a3);
  if ( (*(_DWORD *)(a1 + 256) & 0x8000000) != 0 && *(float *)(dword_106B31C8 + 12) < (double)*(float *)(a1 + 3840) )
    sub_103CF190((float *)a1);
  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1) )
    goto LABEL_16;
  if ( sub_103CFD80(a1, a2) )
  {
    v4 = (float)*(int *)(a1 + 220);
    if ( (double)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 448))(a1) * 0.5 < v4 )
      sub_103CFF40(a1, 0);
    else
      sub_103CFF40(a1, 1);
    return;
  }
  if ( sub_103CF380((_DWORD *)a1) )
  {
    if ( sub_103CF050((float *)a1) )
      sub_1007DD70(dword_106EC894);
    else
      sub_1007DD70(dword_106EC898);
    return;
  }
  if ( sub_1007DE30(*(_DWORD **)(a1 + 2588)) != 6 && !sub_103CF050((float *)a1) )
LABEL_16:
    sub_1007DD70(6);
}
