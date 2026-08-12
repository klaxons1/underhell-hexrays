void __thiscall sub_1037B830(int this)
{
  int v2; // ebx
  int v3; // eax
  unsigned int v4; // eax
  int *v5; // ecx
  int v6; // edi
  double v7; // st4
  double v8; // st6
  double v9; // st4
  double v10; // st5
  double v11; // st6
  double v12; // st7
  int v13; // eax
  int v14; // edi
  int (__thiscall *v15)(int); // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  int v20; // [esp+18h] [ebp-30h]
  float v21; // [esp+38h] [ebp-10h]
  float v22; // [esp+3Ch] [ebp-Ch]
  int v23; // [esp+3Ch] [ebp-Ch]
  float v24; // [esp+40h] [ebp-8h]
  int v25; // [esp+44h] [ebp-4h]

  if ( *(float *)(this + 4628) <= (double)*(float *)(dword_106B31C8 + 12) )
  {
    if ( *(_DWORD *)(this + 4616) || (sub_1037B710((_DWORD *)this), *(_DWORD *)(this + 4616)) )
    {
      v22 = *(float *)(dword_106E9534 + 44);
      *(float *)(this + 4628) = RandomFloat(0.80000001, 1.2) * v22 + *(float *)(dword_106B31C8 + 12);
      v2 = *(int *)(dword_106B31C8 + 20) <= 1 ? sub_10261B20() : 0;
      v3 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
      if ( !v3 )
      {
        v25 = 0;
        v24 = 1440000.0;
        v23 = 0;
        if ( *(int *)(this + 4616) > 0 )
        {
          do
          {
            v4 = *(_DWORD *)(*(_DWORD *)(this + 4604) + 4 * v3);
            if ( v4 != -1 )
            {
              v5 = &off_1061BE18[4 * (v4 & 0xFFF) + 1];
              if ( off_1061BE18[4 * (v4 & 0xFFF) + 2] == v4 >> 12 )
              {
                v6 = *v5;
                if ( *v5 )
                {
                  if ( (*(_DWORD *)(v2 + 252) & 0x800) != 0 )
                    sub_100DAE60(v2);
                  if ( (*(_DWORD *)(v6 + 252) & 0x800) != 0 )
                    sub_100DAE60(v6);
                  v7 = *(float *)(v6 + 584) - *(float *)(v2 + 584);
                  v8 = v7 * v7;
                  v9 = *(float *)(v6 + 580) - *(float *)(v2 + 580);
                  v10 = v8;
                  v11 = *(float *)(v6 + 588) - *(float *)(v2 + 588);
                  v12 = v9 * v9 + v10 + v11 * v11;
                  if ( v12 < v24 )
                  {
                    v13 = __RTDynamicCast(
                            v6,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                            (int)&CNPC_Bullseye `RTTI Type Descriptor',
                            0);
                    if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v13 + 876))(v13, this) )
                    {
                      if ( (*(unsigned __int8 (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)v2 + 548))(
                             v2,
                             v6,
                             16449,
                             0) )
                      {
                        v25 = v6;
                        v21 = v12;
                        v24 = v21;
                      }
                    }
                  }
                }
              }
            }
            v3 = v23 + 1;
            v23 = v3;
          }
          while ( v3 < *(_DWORD *)(this + 4616) );
          if ( v25 )
          {
            sub_10372B80((_DWORD *)this);
            if ( (*(_DWORD *)(v25 + 252) & 0x800) != 0 )
              sub_100DAE60(v25);
            v14 = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)this + 1508))(this, v25 + 580, 20.0);
            v15 = *(int (__thiscall **)(int))(*(_DWORD *)v14 + 8);
            *(_DWORD *)(v14 + 260) = "siegetarget";
            *(_DWORD *)(this + 4632) = *(_DWORD *)v15(v14);
            (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)this + 1120))(this, v14, 1, 1);
            if ( (*(_DWORD *)(v14 + 252) & 0x800) != 0 )
              sub_100DAE60(v14);
            v20 = *(_DWORD *)(*(_DWORD *)(this + 2588) + 32);
            v16 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 1868))(this);
            sub_10077EC0(v16, v20, v14, (float *)(v14 + 580), 0.0, 1);
            v17 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 1868))(this);
            v18 = sub_100773C0(v17, v14, 0);
            if ( v18 )
            {
              v19 = dword_106B31C8;
              *(float *)(v18 + 32) = *(float *)(dword_106B31C8 + 12) - 5.0;
              *(float *)(v18 + 28) = *(float *)(v19 + 12) - 1.0;
            }
          }
        }
      }
    }
  }
}
