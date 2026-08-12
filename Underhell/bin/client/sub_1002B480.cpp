void __thiscall sub_1002B480(int this, float a2)
{
  int v3; // ebx
  int v4; // esi
  double v5; // st7
  float v6; // [esp+0h] [ebp-20h]
  float v7; // [esp+14h] [ebp-Ch] BYREF
  float v8; // [esp+18h] [ebp-8h] BYREF
  float v9; // [esp+1Ch] [ebp-4h] BYREF

  if ( *(_WORD *)(this + 1398) )
  {
    v3 = LODWORD(a2);
    if ( a2 != 0.0 )
    {
      v4 = sub_10027270(SLODWORD(a2), "mouth");
      if ( v4 != -1 )
      {
        v5 = (double)*(unsigned __int8 *)((*(int (__thiscall **)(int))(*(_DWORD *)this + 44))(this) + 4) * 0.015625;
        a2 = v5;
        v7 = v5;
        if ( v5 > 1.0 )
          a2 = 1.0;
        sub_10028730((_DWORD *)this, v4, &v9, &v8);
        if ( v4 >= 0 )
        {
          v6 = a2 * v8 + (1.0 - a2) * v9;
          sub_1001D8C0(v3, v4, v6, &a2);
          *(float *)(this + 4 * v4 + 1404) = a2;
        }
        sub_1002A720(this + 1500, v4, &v7);
      }
    }
  }
}
