int __thiscall sub_10386750(_DWORD *this)
{
  int result; // eax
  unsigned int v3; // eax
  int v4; // esi
  int v5; // [esp+14h] [ebp-4h] BYREF

  result = this[62] >> 17;
  if ( (this[62] & 0x20000) == 0 )
  {
    v3 = this[967];
    if ( v3 == -1
      || (result = v3 >> 12, off_1061BE18[4 * (this[967] & 0xFFF) + 2] != result)
      || !off_1061BE18[4 * (this[967] & 0xFFF) + 1] )
    {
      result = sub_10283150();
      v4 = result;
      if ( result )
      {
        v5 = 20;
        sub_100C1E10((float *)(result + 828), &v5);
        *(float *)&v5 = 0.5;
        sub_102BBDC0((float *)(v4 + 832), (float *)&v5);
        v5 = 8;
        sub_10284420((float *)(v4 + 848), &v5);
        v5 = 32;
        sub_10284480((float *)(v4 + 852), &v5);
        v5 = 5;
        sub_102842B0((float *)(v4 + 856), &v5);
        v5 = 15;
        sub_102843C0((float *)(v4 + 840), &v5);
        v5 = 25;
        sub_100C1DB0((float *)(v4 + 844), &v5);
        sub_100C34C0((float *)(v4 + 800), 0.40000001, 0.40000001, 0.40000001);
        sub_102BC090((float *)(v4 + 812), 0.0, 0.0, 0.0);
        sub_100F5880((int *)v4, -1.0);
        sub_10284B60(v4, (int)this, 0);
        result = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
        this[967] = *(_DWORD *)result;
      }
    }
  }
  return result;
}
