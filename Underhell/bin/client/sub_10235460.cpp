void __cdecl sub_10235460(float *a1, float *a2, int a3, int a4)
{
  int v4; // ebx
  double v5; // st7
  char *v6; // ebx

  if ( (_WORD)a3 != 0xFFFF && dword_1047CA88 )
  {
    *a1 = 3.4028235e38;
    a1[1] = 3.4028235e38;
    a1[2] = 0.0;
    *a2 = -3.4028235e38;
    a2[1] = -3.4028235e38;
    a2[2] = 0.0;
    v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA88 + 40))(dword_1047CA88, a3);
    if ( sub_10024F50(&flt_10459240, (float *)(v4 + 128)) && sub_10024F50(&flt_10459240, (float *)(v4 + 140)) )
    {
      if ( sub_10024F50(&flt_10459240, (float *)(v4 + 104)) && sub_10024F50(&flt_10459240, (float *)(v4 + 116)) )
        goto LABEL_10;
      *a1 = *(float *)(v4 + 104);
      a1[1] = *(float *)(v4 + 108);
      a1[2] = *(float *)(v4 + 112);
      *a2 = *(float *)(v4 + 116);
      a2[1] = *(float *)(v4 + 120);
      v5 = *(float *)(v4 + 124);
    }
    else
    {
      *a1 = *(float *)(v4 + 128);
      a1[1] = *(float *)(v4 + 132);
      a1[2] = *(float *)(v4 + 136);
      *a2 = *(float *)(v4 + 140);
      a2[1] = *(float *)(v4 + 144);
      v5 = *(float *)(v4 + 148);
    }
    a2[2] = v5;
LABEL_10:
    v6 = sub_10127650((_DWORD *)v4, a4);
    sub_100158B0((float *)v6 + 8, a1, a1);
    sub_10015910((float *)v6 + 11, a2, a2);
    return;
  }
  *a1 = 0.0;
  a1[1] = 0.0;
  a1[2] = 0.0;
  *a2 = 0.0;
  a2[1] = 0.0;
  a2[2] = 0.0;
}
