void __thiscall sub_101A5870(float *this)
{
  double v2; // st7
  double v3; // st6
  float v4[3]; // [esp+4h] [ebp-10h] BYREF
  float v5; // [esp+10h] [ebp-4h]

  if ( *((float *)off_103DC81C + 3) >= (double)this[537] )
  {
    v2 = this[536] - *((float *)off_103DC81C + 3);
    if ( v2 >= 0.0 )
    {
      v3 = 1.0 - v2;
      v5 = v3;
      if ( v3 > 0.0 )
      {
        (*(void (__thiscall **)(int, float *))(*(_DWORD *)dword_1041315C + 76))(dword_1041315C, v4);
        if ( v4[0] > 1.0 )
        {
          v4[0] = v4[0] + -v4[0] * v5;
          (*(void (__thiscall **)(int, float *))(*(_DWORD *)dword_1041315C + 80))(dword_1041315C, v4);
          nullsub_4();
          return;
        }
        this[537] = this[536] + 0.1;
      }
      nullsub_4();
    }
  }
}
