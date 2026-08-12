int __thiscall sub_100D96A0(float *this, float *a2, int a3, float a4, float a5)
{
  double v6; // st7
  int result; // eax
  float v8; // [esp+0h] [ebp-Ch]
  float v9; // [esp+0h] [ebp-Ch]

  if ( (byte_104326E8 & 1) != 0 || *(_DWORD *)(dword_10432A2C + 48) )
  {
    *(float *)(a3 + 28) = *(float *)(dword_104339D4 + 44) * a4 + *(float *)(a3 + 28);
  }
  else if ( (*(int (__thiscall **)(float *))(*(_DWORD *)this + 132))(this) && *(_DWORD *)(dword_10432CFC + 48) )
  {
    if ( 0.0 != a4 )
    {
      this[48] = this[48] - a4 * *(float *)(dword_10433A64 + 44);
      v8 = this[48] - a2[1];
      sub_10229120(v8);
    }
  }
  else
  {
    a2[1] = a2[1] - *(float *)(dword_10433A64 + 44) * a4;
  }
  if ( (byte_104326E8 & 1) != 0 )
  {
    *(float *)(a3 + 24) = *(float *)(a3 + 24) - *(float *)(dword_10433BCC + 44) * a5;
  }
  else
  {
    if ( (*(int (__thiscall **)(float *))(*(_DWORD *)this + 132))(this) && *(_DWORD *)(dword_10432CFC + 48) )
    {
      if ( 0.0 != a5 )
      {
        this[47] = ((double (__thiscall *)(int *))*(_DWORD *)(*off_103E0EB8 + 64))(off_103E0EB8) * a5 + this[47];
        v9 = this[47] - *a2;
        sub_10229120(v9);
      }
    }
    else
    {
      *a2 = ((double (__thiscall *)(int *))*(_DWORD *)(*off_103E0EB8 + 64))(off_103E0EB8) * a5 + *a2;
    }
    if ( *(float *)(dword_10432834 + 44) < (double)*a2 )
      *a2 = *(float *)(dword_10432834 + 44);
    v6 = -*(float *)(dword_1043287C + 44);
    if ( v6 > *a2 )
      *a2 = v6;
  }
  *(_WORD *)(a3 + 56) = (int)a4;
  result = (int)a5;
  *(_WORD *)(a3 + 58) = result;
  return result;
}
