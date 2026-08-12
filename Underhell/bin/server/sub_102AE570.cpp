char __thiscall sub_102AE570(int this, float *a2, float a3, int a4, int *a5, int a6)
{
  int v7; // eax
  int v8; // esi
  float v10; // [esp+0h] [ebp-60h]
  int v11[19]; // [esp+14h] [ebp-4Ch] BYREF

  sub_10072560(v11);
  sub_1006FF60(v11, a4);
  sub_10070FE0(v11, 400);
  if ( (_BYTE)a6 )
    sub_1042C170(4);
  else
    sub_1042C170(2);
  if ( *(char *)(this + 248) < 0 )
    sub_1042C170(64);
  sub_10072770(v11, a2, a3);
  if ( (_BYTE)a6 == 1 )
    v7 = sub_10072880(0, a2, v11);
  else
    v7 = sub_10072EC0(a2, v11);
  v8 = v7;
  if ( !v7 )
    goto LABEL_14;
  HIBYTE(a6) = 0;
  if ( sub_102ADA20((int *)this, v7, (_BYTE *)&a6 + 3) )
  {
    if ( sub_100E91A0((_DWORD *)this, off_1065FD78) == -1 || sub_100E9270((_DWORD *)this, off_1065FD78) == -1 )
    {
      v10 = *(float *)(dword_106B31C8 + 12) + 2.0;
      sub_100EC3F0((_DWORD *)this, (int)sub_102ADCE0, v10, off_1065FD78);
    }
    goto LABEL_14;
  }
  if ( HIBYTE(a6) == 1 )
  {
LABEL_14:
    sub_100725D0(v11);
    return 0;
  }
  *a5 = v8;
  sub_100725D0(v11);
  return 1;
}
