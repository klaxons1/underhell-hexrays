void __thiscall sub_1006A410(int this, float a2)
{
  int v3; // eax
  double v4; // st4
  double v5; // st4
  double v6; // st4
  double v7; // st4
  float v8; // [esp+Ch] [ebp-30h] BYREF
  float v9; // [esp+10h] [ebp-2Ch]
  float v10; // [esp+14h] [ebp-28h]
  float v11; // [esp+18h] [ebp-24h] BYREF
  float v12; // [esp+1Ch] [ebp-20h]
  float v13; // [esp+20h] [ebp-1Ch]
  float v14; // [esp+24h] [ebp-18h] BYREF
  float v15; // [esp+28h] [ebp-14h]
  float v16; // [esp+2Ch] [ebp-10h]
  float v17; // [esp+30h] [ebp-Ch] BYREF
  float v18; // [esp+34h] [ebp-8h]
  float v19; // [esp+38h] [ebp-4h]

  if ( *(int *)(this + 208) >= 0 )
  {
    v3 = sub_100422D0();
    if ( v3 )
    {
      sub_100132F0(v3, &v11, (int)&v17, (int)&v14, 0);
      v4 = *(float *)(this + 212);
      v8 = (v17 - v14) * v4 + v11;
      v9 = (v18 - v15) * v4 + v12;
      v10 = (v19 - v16) * v4 + v13;
      sub_10069550((int (__thiscall ***)(int, float *))(this + 52), 0, &v8);
      v5 = *(float *)(this + 212);
      v8 = (v14 + v17) * v5 + v11;
      v9 = (v18 + v15) * v5 + v12;
      v10 = (v16 + v19) * v5 + v13;
      sub_10069550((int (__thiscall ***)(int, float *))(this + 52), 1, &v8);
      v6 = *(float *)(this + 212);
      v8 = (-v17 - v14) * v6 + v11;
      v9 = (-v18 - v15) * v6 + v12;
      v10 = (-v19 - v16) * v6 + v13;
      sub_10069550((int (__thiscall ***)(int, float *))(this + 52), 2, &v8);
      v7 = *(float *)(this + 212);
      v8 = (v14 - v17) * v7 + v11;
      v9 = (v15 - v18) * v7 + v12;
      v10 = (v16 - v19) * v7 + v13;
      sub_10069550((int (__thiscall ***)(int, float *))(this + 52), 3, &v8);
      if ( *(_DWORD *)(this + 152) != 7 )
      {
        (**(void (__thiscall ***)(int, int))(this + 48))(this + 48, this + 152);
        *(_DWORD *)(this + 152) = 7;
      }
    }
  }
  sub_1006A2D0((_DWORD *)this, a2);
  sub_1006A210(this, *((float *)off_103DC81C + 3));
}
