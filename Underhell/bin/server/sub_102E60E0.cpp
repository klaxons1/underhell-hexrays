void __thiscall sub_102E60E0(float *this, int a2)
{
  int *v2; // edi
  int v4; // ebx
  double v5; // st7
  int v6[20]; // [esp+1Ch] [ebp-5Ch] BYREF
  int v7[3]; // [esp+6Ch] [ebp-Ch] BYREF

  v2 = (int *)a2;
  if ( (*(unsigned __int8 (__thiscall **)(float *, int))(*(_DWORD *)this + 752))(this, a2) )
  {
    a2 = v2 ? *(_DWORD *)(*(int (__thiscall **)(int *))(*v2 + 8))(v2) : -1;
    v4 = sub_10319100(&a2);
    if ( v4 != -1 && *(float *)(*((_DWORD *)this + 278) + 4 * v4) < (double)*(float *)(dword_106B31C8 + 12) )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int *))(*v2 + 320))(v2) )
      {
        v5 = this[284] + 2.0;
        if ( v5 >= 15.0 )
          this[284] = 15.0;
        else
          this[284] = v5;
      }
      else
      {
        this[284] = 15.0;
      }
      sub_10248110((int)v6, (int)v2, (int)v2, this[284], 0, 0);
      if ( (v2[63] & 0x800) != 0 )
        sub_100DAE60((int)v2);
      if ( ((_DWORD)this[63] & 0x800) != 0 )
        sub_100DAE60((int)this);
      if ( (v2[63] & 0x800) != 0 )
        sub_100DAE60((int)v2);
      *(float *)v7 = *((float *)v2 + 145) - this[145];
      *(float *)&v7[1] = *((float *)v2 + 146) - this[146];
      *(float *)&v7[2] = *((float *)v2 + 147) - this[147];
      sub_10248740((int)v6, (float *)v7, (float *)v2 + 145, 1.0);
      sub_100D9E70(v2, (int)this, v6);
      *(float *)(*((_DWORD *)this + 278) + 4 * v4) = *(float *)(dword_106B31C8 + 12) + 0.3;
    }
  }
}
