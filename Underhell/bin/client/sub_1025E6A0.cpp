char *__usercall sub_1025E6A0@<eax>(const char *a1@<edi>)
{
  char *result; // eax

  result = (char *)sub_100DDA40(strlen(a1) + 1);
  strcpy(result, a1);
  return result;
}
