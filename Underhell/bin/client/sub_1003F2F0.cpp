void __thiscall sub_1003F2F0(_DWORD *this, int *a2)
{
  int *v2; // esi
  int v4; // edi
  exception *v5; // eax
  exception *v6; // esi
  char *v7; // eax
  int v8; // eax
  char *v9; // eax
  int v10; // eax
  char *v11; // eax
  char *v12; // eax
  int v13; // eax
  int v14; // esi
  double v15; // st7
  double v16; // st6
  int v17; // ebx
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
  float v30; // [esp+4h] [ebp-228h]
  float v31; // [esp+4h] [ebp-228h]
  float v32; // [esp+4h] [ebp-228h]
  char Destination[512]; // [esp+14h] [ebp-218h] BYREF
  float v34; // [esp+214h] [ebp-18h]
  int v35; // [esp+218h] [ebp-14h]
  _DWORD *v36; // [esp+21Ch] [ebp-10h]
  float v37; // [esp+220h] [ebp-Ch]
  int v38; // [esp+224h] [ebp-8h]
  float v39; // [esp+228h] [ebp-4h]

  v2 = a2;
  v36 = this;
  if ( a2 )
  {
    v4 = *a2;
    v35 = v4;
    if ( v4 )
    {
      v38 = a2[1];
      if ( v38 )
      {
        if ( !(unsigned __int8)sub_101E2030(v4) )
        {
          v39 = 0.0;
          if ( sub_101E2630(v4) > 0 )
          {
            do
            {
              v5 = (exception *)sub_101E2D10(LODWORD(v39));
              v6 = v5;
              if ( v5 )
              {
                if ( (unsigned __int8)sub_101E1AF0(v5) )
                {
                  sub_102282F0(Destination, "right_", 0x200u);
                  v7 = (char *)exception::what(v6);
                  sub_10228100((int)Destination, v7, 512, -1);
                  if ( sub_1003ECC0(this, Destination) <= 0 )
                    v8 = 0;
                  else
                    v8 = sub_1003ECC0(this, Destination);
                  sub_101E1AB0(v8, 0, 0);
                  sub_102282F0(Destination, "left_", 0x200u);
                  v9 = (char *)exception::what(v6);
                  sub_10228100((int)Destination, v9, 512, -1);
                  if ( sub_1003ECC0(this, Destination) <= 0 )
                  {
                    sub_101E1AB0(0, 0, 1);
                  }
                  else
                  {
                    v10 = sub_1003ECC0(this, Destination);
                    sub_101E1AB0(v10, 0, 1);
                  }
                }
                else
                {
                  v11 = (char *)exception::what(v6);
                  if ( sub_1003ECC0(this, v11) <= 0 )
                  {
                    v13 = 0;
                  }
                  else
                  {
                    v12 = (char *)exception::what(v6);
                    v13 = sub_1003ECC0(this, v12);
                  }
                  sub_101E1AB0(v13, 0, 0);
                }
              }
              v14 = ++LODWORD(v39);
            }
            while ( v14 < sub_101E2630(v4) );
            v2 = a2;
          }
          sub_102619F0(1);
        }
        if ( *(_DWORD *)(dword_1043763C + 48) )
        {
          v15 = sub_101E6410(v38);
          v39 = v15;
          v30 = v15;
          sub_101E3B00(v4, v30);
          v16 = *((float *)v2 + 8) + 0.1;
          if ( v16 >= 1.0 )
            v16 = 1.0;
          *((float *)v2 + 8) = v16;
          v17 = 0;
          v38 = 0;
          v34 = v15 * v16;
          if ( sub_101E2630(v4) > 0 )
          {
            do
            {
              v18 = sub_101E2D10(v17);
              v19 = v18;
              if ( v18 && (unsigned __int8)sub_101E19E0(v18) )
              {
                if ( (unsigned __int8)sub_101E1AF0(v19) )
                {
                  for ( i = 0; i < 2; ++i )
                  {
                    v21 = sub_101E23F0(i);
                    v22 = v39;
                    v23 = v21;
                    sub_101E3350(v39, i);
                    v37 = v22;
                    if ( v23 >= 0 )
                    {
                      v24 = sub_1003EC30(v36, v23);
                      v31 = v34 * v37 + (1.0 - v34) * v24;
                      sub_1003EB70(v36, v23, v31);
                    }
                  }
                  v17 = v38;
                }
                else
                {
                  v25 = sub_101E23F0(0);
                  v26 = v39;
                  v27 = v25;
                  sub_101E3350(v39, 0);
                  v37 = v26;
                  if ( v27 >= 0 )
                  {
                    v28 = v36;
                    v29 = sub_1003EC30(v36, v27);
                    v32 = v34 * v37 + (1.0 - v34) * v29;
                    sub_1003EB70(v28, v27, v32);
                  }
                }
              }
              v38 = ++v17;
            }
            while ( v17 < sub_101E2630(v35) );
            v2 = a2;
          }
          *((_BYTE *)v2 + 12) = 1;
        }
      }
    }
  }
}
