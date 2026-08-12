void __thiscall sub_10046170(int this)
{
  double v2; // st7
  _BYTE *v3; // edi
  double v4; // st7
  double v5; // st6
  char v6; // bl
  char v7; // bl
  char v8; // bl
  int v9; // ecx
  double v10; // rt0
  float *v11; // esi
  char v12; // bl
  char v13; // bl
  char v14; // bl
  float v15; // [esp+8h] [ebp-Ch]
  float v16; // [esp+8h] [ebp-Ch]
  float v17; // [esp+Ch] [ebp-8h]
  float v18; // [esp+10h] [ebp-4h]

  if ( -1.0 != *(float *)(this + 3792) )
  {
    v2 = *((float *)off_103DC81C + 3) - *(float *)(this + 3792);
    v3 = (_BYTE *)(this + 3372);
    if ( v2 >= *(float *)(this + 3416) )
    {
      v12 = *(_BYTE *)(this + 3808);
      if ( *v3 != v12 )
      {
        (**(void (__thiscall ***)(int, int))(this + 3356))(this + 3356, this + 3372);
        *v3 = v12;
      }
      v13 = *(_BYTE *)(this + 3809);
      if ( *(_BYTE *)(this + 3373) != v13 )
      {
        (**(void (__thiscall ***)(int, int))(this + 3356))(this + 3356, this + 3372);
        *(_BYTE *)(this + 3373) = v13;
      }
      v14 = *(_BYTE *)(this + 3810);
      if ( *(_BYTE *)(this + 3374) != v14 )
      {
        (**(void (__thiscall ***)(int, int))(this + 3356))(this + 3356, this + 3372);
        *(_BYTE *)(this + 3374) = v14;
      }
      if ( *(_DWORD *)(this + 3388) != *(_DWORD *)(this + 3812) )
      {
        (**(void (__thiscall ***)(int, int))(this + 3356))(this + 3356, this + 3388);
        *(float *)(this + 3388) = *(float *)(this + 3812);
      }
      if ( *(_DWORD *)(this + 3392) != *(_DWORD *)(this + 3816) )
      {
        (**(void (__thiscall ***)(int, int))(this + 3356))(this + 3356, this + 3392);
        *(float *)(this + 3392) = *(float *)(this + 3816);
      }
      *(float *)(this + 3792) = -1.0;
    }
    else
    {
      v4 = v2 / *(float *)(this + 3416);
      v15 = v4;
      v5 = 1.0 - v4;
      v17 = 1.0 - v4;
      v6 = (int)((double)*(unsigned __int8 *)(this + 3796) * (1.0 - v4) + (double)*(unsigned __int8 *)(this + 3808) * v4);
      if ( *v3 != v6 )
      {
        (**(void (__thiscall ***)(int, int))(this + 3356))(this + 3356, this + 3372);
        v4 = v15;
        v5 = v17;
        *v3 = v6;
      }
      v7 = (int)((double)*(unsigned __int8 *)(this + 3797) * v5 + (double)*(unsigned __int8 *)(this + 3809) * v4);
      if ( *(_BYTE *)(this + 3373) != v7 )
      {
        (**(void (__thiscall ***)(int, int))(this + 3356))(this + 3356, this + 3372);
        v4 = v15;
        v5 = v17;
        *(_BYTE *)(this + 3373) = v7;
      }
      v8 = (int)((double)*(unsigned __int8 *)(this + 3798) * v5 + (double)*(unsigned __int8 *)(this + 3810) * v4);
      if ( *(_BYTE *)(this + 3374) != v8 )
      {
        (**(void (__thiscall ***)(int, int))(this + 3356))(this + 3356, this + 3372);
        v4 = v15;
        v5 = v17;
        *(_BYTE *)(this + 3374) = v8;
      }
      v18 = *(float *)(this + 3800) * v5 + v4 * *(float *)(this + 3812);
      if ( *(_DWORD *)(this + 3388) != LODWORD(v18) )
      {
        (**(void (__thiscall ***)(int, int))(this + 3356))(this + 3356, this + 3388);
        *(float *)(this + 3388) = v18;
        v4 = v15;
        v5 = v17;
      }
      v9 = *(_DWORD *)(this + 3392);
      v10 = v5 * *(float *)(this + 3804);
      v11 = (float *)(this + 3392);
      v16 = v10 + v4 * v11[106];
      if ( v9 != LODWORD(v16) )
      {
        (**((void (__thiscall ***)(int, float *))v11 - 9))((int)(v11 - 9), v11);
        *v11 = v16;
      }
    }
  }
}
