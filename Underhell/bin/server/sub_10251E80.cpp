char *__thiscall sub_10251E80(int this)
{
  char *result; // eax
  float *v3; // eax
  float *v4; // ecx
  float v5[3]; // [esp+8h] [ebp-10h] BYREF
  int v6; // [esp+14h] [ebp-4h] BYREF

  result = sub_100E38F0((float *)this);
  if ( !*(_BYTE *)(this + 944) )
  {
    sub_1024EB60((_DWORD *)this);
    *(_BYTE *)(this + 944) = 1;
    result = *(char **)(this + 940);
    if ( result != (char *)-1 )
    {
      result = (char *)((unsigned int)result >> 12);
      if ( (char *)off_1061BE18[4 * (*(_DWORD *)(this + 940) & 0xFFF) + 2] == result )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(this + 940) & 0xFFF) + 1] )
        {
          v3 = (float *)sub_10022D70();
          *v3 = (*(float *)(this + 340) - *(float *)(this + 328)) * 0.5 + *(float *)(this + 328);
          v3[1] = (*(float *)(this + 344) - *(float *)(this + 332)) * 0.5 + *(float *)(this + 332);
          v3[2] = 0.5 * (*(float *)(this + 348) - *(float *)(this + 336)) + *(float *)(this + 336);
          if ( *(_DWORD *)(this + 940) == -1
            || off_1061BE18[4 * (*(_DWORD *)(this + 940) & 0xFFF) + 2] != *(_DWORD *)(this + 940) >> 12 )
          {
            v4 = 0;
          }
          else
          {
            v4 = (float *)off_1061BE18[4 * (*(_DWORD *)(this + 940) & 0xFFF) + 1];
          }
          v5[0] = v4[179] - *v3;
          v5[1] = v4[180] - v3[1];
          v5[2] = v4[181] - v3[2];
          sub_1025F370(this, v5, 0);
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)(this + 320) + 44))(this + 320) == 1 )
            sub_100E9630((float *)this, 0, 0, 0);
          if ( *(_DWORD *)(this + 260) )
          {
            v6 = 1;
            return (char *)sub_100332A0((int *)(this + 248), &v6);
          }
          else
          {
            result = (char *)sub_100D8290((float *)this, 0.1);
            *(_DWORD *)(this + 4) = sub_10251B40;
          }
        }
      }
    }
  }
  return result;
}
