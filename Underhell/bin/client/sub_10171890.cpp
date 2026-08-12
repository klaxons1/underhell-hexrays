void __thiscall sub_10171890(void *this, float *a2, int a3, int a4, float a5)
{
  _BYTE *v5; // eax
  _BYTE *v6; // esi
  float v7; // [esp+8h] [ebp-Ch]
  int v8; // [esp+20h] [ebp+Ch]

  v5 = sub_1016FF80((int)this, a2, a3);
  v6 = v5;
  if ( v5 )
  {
    sub_10035090(v5, 3, 0);
    LOWORD(v8) = *((_DWORD *)v6 + 22);
    BYTE2(v8) = BYTE2(*((_DWORD *)v6 + 22));
    HIBYTE(v8) = -56;
    v6[84] = 14;
    if ( *((_DWORD *)v6 + 22) != v8 )
      *((_DWORD *)v6 + 22) = v8;
    *((_DWORD *)v6 + 511) = 200;
    *((float *)v6 + 515) = a5;
    *((_DWORD *)v6 + 495) = 128;
    *((float *)v6 + 527) = flt_10459240;
    *((_QWORD *)v6 + 264) = qword_10459244;
    sub_10034A30((float *)v6, a2);
    *((float *)v6 + 500) = 8.0;
    *((float *)v6 + 496) = *((float *)off_103DC81C + 3);
    *((float *)v6 + 518) = 0.0;
    v7 = (float)(45 * (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 7));
    sub_10034B80((float *)v6, 2, v7);
  }
}
