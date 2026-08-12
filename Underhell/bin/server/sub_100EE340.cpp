void __thiscall sub_100EE340(_DWORD *this, int a2)
{
  int v2; // esi
  _DWORD *v4; // eax
  int v5; // ebx
  exception *v6; // eax
  exception *v7; // esi
  char *v8; // eax
  int v9; // eax
  char *v10; // eax
  int v11; // eax
  char *v12; // eax
  int v13; // eax
  char *v14; // eax
  int v15; // esi
  double v16; // st7
  double v17; // st7
  int v18; // eax
  int v19; // edi
  int i; // esi
  int v21; // eax
  double v22; // st7
  int v23; // ebx
  double v24; // st7
  int v25; // eax
  double v26; // st7
  int v27; // esi
  _DWORD *v28; // edi
  double v29; // st7
  int v30; // esi
  char v31; // [esp+4h] [ebp-228h]
  float v32; // [esp+4h] [ebp-228h]
  float v33; // [esp+4h] [ebp-228h]
  float v34; // [esp+4h] [ebp-228h]
  char String1[512]; // [esp+14h] [ebp-218h] BYREF
  int v36; // [esp+214h] [ebp-18h]
  float v37; // [esp+218h] [ebp-14h]
  _DWORD *v38; // [esp+21Ch] [ebp-10h]
  float v39; // [esp+220h] [ebp-Ch]
  float v40; // [esp+224h] [ebp-8h]
  int v41; // [esp+228h] [ebp-4h]

  v2 = a2;
  v38 = this;
  if ( a2 )
  {
    v4 = (_DWORD *)sub_100D7680((int)this);
    if ( !v4 || sub_10023D10(v4, 1) )
    {
      v5 = *(_DWORD *)a2;
      v36 = v5;
      if ( v5 )
      {
        v40 = *(float *)(a2 + 4);
        if ( v40 != 0.0 )
        {
          if ( !(unsigned __int8)sub_10418720(v5) )
          {
            v41 = 0;
            if ( sub_10418CC0(v5) > 0 )
            {
              do
              {
                v6 = (exception *)sub_104192C0(v41);
                v7 = v6;
                if ( v6 )
                {
                  if ( (unsigned __int8)sub_10418320(v6) )
                  {
                    sub_104299C0(String1, "right_", 0x200u);
                    v8 = (char *)exception::what(v7);
                    sub_10429750((int)String1, v8, 512, -1);
                    v9 = sub_100ECFF0(this, String1);
                    sub_10418300(v9, 0, 0);
                    if ( sub_10018DE0(String1) )
                      sub_10418330(1);
                    sub_104299C0(String1, "left_", 0x200u);
                    v10 = (char *)exception::what(v7);
                    sub_10429750((int)String1, v10, 512, -1);
                    v11 = sub_100ECFF0(this, String1);
                    sub_10418300(v11, 0, 1);
                    if ( sub_10018DE0(String1) )
                      sub_10418330(1);
                  }
                  else
                  {
                    v12 = (char *)exception::what(v7);
                    v13 = sub_100ECFF0(this, v12);
                    sub_10418300(v13, 0, 0);
                    v14 = (char *)exception::what(v7);
                    v31 = sub_10018DE0(v14);
                    sub_10418330(v31);
                  }
                }
                v15 = ++v41;
              }
              while ( v15 < sub_10418CC0(v5) );
              v2 = a2;
            }
            sub_10418730(1);
          }
          v16 = sub_1041CA40(LODWORD(v40));
          v37 = v16;
          v32 = v16;
          sub_1041A260(v5, v32);
          v40 = v16;
          v17 = sub_100ECEC0((float *)v2, (float *)this);
          v41 = 0;
          v40 = v17 * v40;
          if ( sub_10418CC0(v5) > 0 )
          {
            do
            {
              v18 = sub_104192C0(v41);
              v19 = v18;
              if ( v18 && (unsigned __int8)sub_10418290(v18) && (!byte_10646C34 || (unsigned __int8)sub_10418350(v19)) )
              {
                if ( (unsigned __int8)sub_10418320(v19) )
                {
                  for ( i = 0; i < 2; ++i )
                  {
                    v21 = sub_10418A80(i);
                    v22 = v37;
                    v23 = v21;
                    sub_10419B10(v37, i);
                    v39 = v22;
                    if ( v23 >= 0 )
                    {
                      v24 = sub_100ED7A0(v38, v23);
                      v33 = v24 * (1.0 - v40) + v40 * v39;
                      sub_100ED710(v38, v23, v33);
                    }
                  }
                  v5 = v36;
                }
                else
                {
                  v25 = sub_10418A80(0);
                  v26 = v37;
                  v27 = v25;
                  sub_10419B10(v37, 0);
                  v39 = v26;
                  if ( v27 >= 0 )
                  {
                    v28 = v38;
                    v29 = sub_100ED7A0(v38, v27);
                    v34 = v29 * (1.0 - v40) + v40 * v39;
                    sub_100ED710(v28, v27, v34);
                  }
                }
              }
              v30 = ++v41;
            }
            while ( v30 < sub_10418CC0(v5) );
            v2 = a2;
          }
          *(_BYTE *)(v2 + 12) = 1;
        }
      }
    }
  }
}
