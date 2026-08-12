void __thiscall sub_10028050(void *this, int *a2, float a3, int a4, int a5, float *a6, int a7)
{
  bool v9; // zf
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // esi
  double v15; // st7
  float *v16; // esi
  double v17; // st7
  int v18; // eax
  int v19; // [esp+30h] [ebp-8h]
  int i; // [esp+34h] [ebp-4h]
  int savedregs; // [esp+38h] [ebp+0h] BYREF
  int v22; // [esp+40h] [ebp+8h]
  float v23; // [esp+44h] [ebp+Ch]
  float v24; // [esp+44h] [ebp+Ch]
  int v25; // [esp+44h] [ebp+Ch]

  if ( a2 )
  {
    v9 = (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)off_103ED0FC + 56))(off_103ED0FC) == 0;
    v10 = *((_DWORD *)this + 441);
    if ( v9 )
    {
      sub_1011CAB0(a2, *((_DWORD *)this + 452), v10 != *((_DWORD *)this + 443), (*((_DWORD *)this + 28) & 8) == 0);
      v11 = *((_DWORD *)this + 452);
      *((_DWORD *)this + 443) = *((_DWORD *)this + 441);
      sub_1011CB80((int)a2, v11, a3, *((float *)this + 309), *((float *)off_103DC81C + 3));
      v12 = *((_DWORD *)this + 305) - 2;
      v19 = v12;
      if ( v12 >= 0 )
      {
        v13 = 32 * v12;
        for ( i = v13; ; v13 = i )
        {
          v14 = *((_DWORD *)this + 302);
          v15 = *((float *)off_103DC81C + 3) - *(float *)(v14 + v13 + 24);
          v16 = (float *)(v13 + v14);
          v23 = v15;
          v24 = ((double (__thiscall *)(void *, int *, _DWORD))*(_DWORD *)(*(_DWORD *)this + 684))(
                  this,
                  a2,
                  *(_DWORD *)v16)
              * (v16[4]
               * v23)
              + v16[5];
          *(float *)&v22 = v24;
          if ( (sub_10008630((int)a2, *(_DWORD *)v16) & 1) != 0 )
          {
            v17 = v24 - (double)(int)v24;
            *(float *)&v22 = v17;
            if ( v17 < 0.0 )
              *(float *)&v22 = v17 + 1.0;
          }
          else if ( v24 <= 0.99900001 )
          {
            if ( v24 < 0.0 )
              *(float *)&v22 = 0.0;
          }
          else
          {
            *(float *)&v22 = 0.99900001;
          }
          v25 = *(_DWORD *)(dword_10403714 + 48);
          if ( v25 == (*(int (__thiscall **)(int))(*((_DWORD *)this + 2) + 36))((int)this + 8) )
          {
            v18 = sub_10127960(*(_DWORD *)v16);
            sub_10025960(
              "%8.4f : %30s : %5.3f : %4.2f  +\n",
              *((float *)off_103DC81C + 3),
              (const char *)(v18 + *(_DWORD *)(v18 + 4)),
              *(float *)&v22,
              v16[2]);
          }
          sub_10024510(
            (int)&savedregs,
            a2,
            *((float **)this + 307),
            a5,
            a6,
            *(_DWORD *)v16,
            v22,
            a4,
            a7,
            v16[2],
            *((float *)off_103DC81C + 3));
          i -= 32;
          if ( --v19 < 0 )
            break;
        }
      }
    }
    else
    {
      *((_DWORD *)this + 443) = v10;
    }
  }
}
