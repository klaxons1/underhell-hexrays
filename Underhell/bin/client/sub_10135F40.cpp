int __usercall sub_10135F40@<eax>(int result@<eax>, float *a2@<edi>, float *a3@<esi>)
{
  int v3; // ebx
  float *v4; // eax
  int (__thiscall *v5)(int); // edx

  *a2 = flt_1043996C;
  a2[1] = flt_10439970;
  a2[2] = flt_10439974;
  *a3 = flt_10439978;
  a3[1] = flt_1043997C;
  a3[2] = flt_10439980;
  if ( *(_DWORD *)result == 2 )
  {
    result = atoi(*(const char **)(result + 1036));
    if ( result == 2 )
    {
      result = sub_100422D0();
      v3 = result;
      if ( result )
      {
        v4 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)result + 36))(result);
        *a2 = *v4;
        a2[1] = v4[1];
        v5 = *(int (__thiscall **)(int))(*(_DWORD *)v3 + 40);
        a2[2] = v4[2];
        result = v5(v3);
        *a3 = *(float *)result;
        a3[1] = *(float *)(result + 4);
        a3[2] = *(float *)(result + 8);
      }
    }
  }
  return result;
}
