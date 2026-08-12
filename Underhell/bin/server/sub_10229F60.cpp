void __thiscall sub_10229F60(int this, float a2)
{
  double v3; // st7
  bool v4; // zf
  int v5; // eax
  double v6; // st7
  double v7; // st7
  int *v8; // ecx
  float v9; // [esp+0h] [ebp-Ch]
  float v10; // [esp+4h] [ebp-8h]
  float v11; // [esp+14h] [ebp+8h]

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 740))(this);
  if ( *(_BYTE *)(this + 925) || *(_BYTE *)(this + 926) )
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 752))(this);
  if ( *(_DWORD *)(this + 976) && *(_BYTE *)(this + 884) )
  {
    v3 = 2.5;
    if ( *(float *)(this + 904) <= 2.5 )
    {
      v3 = 0.25;
      if ( *(float *)(this + 904) >= 0.25 )
        v3 = *(float *)(this + 904);
    }
    v4 = *(_BYTE *)(this + 885) == 0;
    *(float *)(this + 904) = v3;
    if ( v4 )
    {
      v5 = *(_DWORD *)(this + 984);
      *(float *)(this + 896) = a2;
      if ( v5 )
        v6 = *(float *)(*(_DWORD *)(v5 + 28) + 44);
      else
        v6 = 0.1;
      v10 = v6;
      sub_1041CA70(v10);
      sub_1041EC00(*(_DWORD *)(this + 976), *(float *)(this + 892));
      if ( *(_BYTE *)(this + 885) )
      {
        v9 = sub_1041CA40(*(_DWORD *)(this + 976));
        sub_10227F40(this, v9, 1);
      }
      else
      {
        v7 = *(float *)(this + 904) * *(float *)(this + 896) + *(float *)(this + 892);
        v11 = v7;
        *(float *)(this + 892) = v7;
        if ( *(_DWORD *)(dword_106B31C8 + 20) == 1 && *(_DWORD *)(this + 888) != LODWORD(v11) )
        {
          if ( *(_BYTE *)(this + 84) )
          {
            *(_BYTE *)(this + 88) |= 1u;
            *(float *)(this + 888) = v7;
          }
          else
          {
            v8 = *(int **)(this + 24);
            if ( v8 )
            {
              sub_100194B0(v8, 888);
              v7 = v11;
            }
            *(float *)(this + 888) = v7;
          }
        }
        if ( (unsigned __int8)sub_1041C800(*(_DWORD *)(this + 976)) )
        {
          (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)this + 724))(this, 0, 1);
          sub_102283C0((_DWORD *)this, *(_DWORD **)(this + 976));
        }
      }
    }
    else
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)this + 732))(this);
    }
  }
}
